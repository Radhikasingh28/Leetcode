class Solution {
public:
int reverse(int n ){
     int revnum=0;
    
    while(n>0){
int a = n %10;
 revnum= 10*revnum+a;
 n=n/10;
    }
 return revnum;
}
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int> st;
       
        for(int x : nums){
            st.insert(x);
            st.insert(reverse(x));
        }
        return st.size();


        
    }
};