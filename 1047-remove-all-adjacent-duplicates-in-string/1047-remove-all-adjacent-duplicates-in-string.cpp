class Solution {
public:
    string removeDuplicates(string s) {
        stack <char> st ;
         string res = "";

        for(char ch : s){
            if( !st.empty() && ch == st.top()){
                st.pop();
            }else{
                st.push(ch);
            }
        }
        
        while(st.size()){
        res.push_back(st.top());
        st.pop();


        }
         reverse(res.begin(),res.end());
         return res;
        
    }
};