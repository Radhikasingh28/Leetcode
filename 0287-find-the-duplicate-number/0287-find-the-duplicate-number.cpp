class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int x : nums){
            if(mp.find(x)!=mp.end()){
                return x;
                break;


            }
            else{
                mp[x]++;
            }
        }
        return -1;
    }
};