class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans ="";
        int count =0;
        for(char ch : s){
            if(ch ==')')count--;
            if(count !=0){
                ans.push_back(ch);
            }
            if(ch=='(')count++;
        }           
        return ans;
    }
};