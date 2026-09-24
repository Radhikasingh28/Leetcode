class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int sum =0;
        vector<int> prefix(nums.size(),0);
        prefix[0]=nums[0];
      for(int i =1;i<nums.size();i++){
        prefix[i]=prefix[i-1]+nums[i];

      }
      for(int i =0;i<nums.size();i++){
        int start = max(0,i-nums[i]);
        if(start ==0){
            sum+=prefix[i];
        }
        else {
            sum+=prefix[i]-prefix[start-1];
        }
      }
      return sum; 
    }
};