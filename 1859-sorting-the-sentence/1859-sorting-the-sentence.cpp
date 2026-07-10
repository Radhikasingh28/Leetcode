class Solution {
public:
    string sortSentence(string s) {
        vector<string> arr(10) ;
        string word ="";
        for(int i =0;i<=s.length();i++){
            if(i==s.length()|| s[i]==' '){
                int pos = word.back()-'0';
            word.pop_back();
                arr[pos]=word;
                word="";
            }
            else{
                word+=s[i];
            }

        }
        string ans ="";
        for(int i =0;i<10;i++){
            if(arr[i]!=""){
                if(!ans.empty()){
                    ans+=" ";
                }
                ans+=arr[i];

            }
        }
        return ans;

        
    }
};