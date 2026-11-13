class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        for(int x :s){
            if(!st.empty() && abs(st.top()-x)==32){
                st.pop();
            }
            else{
                st.push(x);
            }
        }
        string ans="";
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();

        }
        reverse(ans.begin(),ans.end());
        return ans;

    }
};