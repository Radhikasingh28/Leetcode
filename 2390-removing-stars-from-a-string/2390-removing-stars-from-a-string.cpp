class Solution {
public:
    string removeStars(string s) {
        stack<char> q ;
        for(char x : s){
            if(!q.empty() && x=='*'){
                q.pop();
            }
            else{
                q.push(x);
            }
        }
        string ans ="";
        while(!q.empty()){
            ans.push_back(q.top());
            q.pop();


        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};