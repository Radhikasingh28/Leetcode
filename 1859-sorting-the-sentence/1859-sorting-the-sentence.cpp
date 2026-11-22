class Solution {
public:
    string sortSentence(string s) {
        vector<string> ans(10);
        stringstream ss(s);
        string word;
        while(ss >> word){
            int pos = word.back()-'0';
            ans[pos]=word.substr(0,word.size()-1);


        }
        string result;
        for(int i=0;i<=9;i++){
            if(ans[i]!=""){
                if(result!=""){
                    result+=" ";
                }
                  result+=ans[i];
            }
          
        }
        return result;
    }
};