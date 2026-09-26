class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
       bool isIncrease = true;
       bool isdecrease = true;
       for(int i =0;i<nums.size()-1;i++){
        if(nums[i] > nums[i+1]) isIncrease= false;
        if(nums[i] <nums[i+1]) isdecrease = false;
       } 
       return isIncrease || isdecrease;
    }
};