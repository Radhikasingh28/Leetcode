class Solution {
public:
    bool detectCapitalUse(string word) {
        int size = word.size();
        if(size==1)return true;
        int upper = isupper(word[1]) ;
       if(upper && !isupper(word[0])) {
        return false;

       }  
       for(int i =2;i<size;i++){
        if(isupper(word[i])!=upper){
            return false;
        }
       } 
       return true;
    }
};