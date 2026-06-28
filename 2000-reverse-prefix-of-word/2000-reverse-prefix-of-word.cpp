class Solution {
public:

string reversePrefix(string word, char ch) {
      int len =0;
      if(word.find(ch)==string::npos){
        return word;
      }
  
    for(char c : word){
        if(c!=ch){
            len++;

        }else{
            reverse(word.begin(), word.begin() + len+1);
            return word;
            
        }



    }
    return word;
   
    }
};