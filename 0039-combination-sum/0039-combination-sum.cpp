class Solution {
public:
void findcombinationSum( int idx , int target , vector<int>&arr, set<vector<int>>& ans, vector<int>&ds){
    if(idx==arr.size()){
        if(target==0){
            ans.insert(ds);
        }
    
        return;
    }
    if(arr[idx]<=target){
         ds.push_back(arr[idx]);
        findcombinationSum(idx , target-arr[idx],arr,ans,ds);
           ds.pop_back(); 

        

    }
     findcombinationSum(idx+1 , target,arr,ans,ds);
     }

 vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        set<vector<int>> ans;
        vector<int>ds;
        findcombinationSum(0, target,candidates,ans,ds);
        
      return vector<vector<int>>(ans.begin(),ans.end());
}

   
    
};