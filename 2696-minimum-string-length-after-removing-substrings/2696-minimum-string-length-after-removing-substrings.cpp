class Solution {
public:
    int minLength(string s) {
        stack<char> st;
        int cnt =0;
        for(char ch : s){
            if(st.empty()){
                st.push(ch);
            }else if(!st.empty()&& st.top()=='A' && ch=='B'){
                st.pop();
            }else if(!st.empty()&& st.top()=='C' && ch=='D'){
                st.pop();
            }else{
                st.push(ch);
            }
        }
        while(!st.empty()){
            st.pop();
            cnt++;
        }
        return cnt;
    }
};