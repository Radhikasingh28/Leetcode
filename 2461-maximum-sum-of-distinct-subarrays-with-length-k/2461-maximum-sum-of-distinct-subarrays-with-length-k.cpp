class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        long long sum =0;
        long long maxsum=0;
        int left=0;
        for(int rgt=0;rgt<nums.size();rgt++){
            sum+=nums[rgt];
            mp[nums[rgt]]++;
            if(rgt-left+1 >k){
                sum=sum-nums[left];
                mp[nums[left]]--;

                if(mp[nums[left]]==0){
                    mp.erase(nums[left]);
                }
                left++;
            }
            if(rgt-left+1 ==k && mp.size()==k){
                maxsum=max(maxsum,sum);
            }
        }
        return maxsum;
    }
};