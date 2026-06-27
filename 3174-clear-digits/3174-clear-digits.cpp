class Solution {
public:
    string clearDigits(string s) {
        stack<char> st ;
        string ans ="";
        for(char ch : s){
            if(isalpha(ch)){
                st.push(ch);

            }
            if(isdigit(ch)){
                st.pop();
            }
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};