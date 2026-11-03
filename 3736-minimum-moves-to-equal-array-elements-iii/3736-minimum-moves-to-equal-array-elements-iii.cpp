class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxi = nums[0];
        for (int i=0;i<nums.size();i++){
            maxi=max(nums[i],maxi);
        }
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            cnt = cnt+(maxi-nums[i]);

        }
        return cnt;
    }
};