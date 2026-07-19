class Solution {
public:
    char findTheDifference(string s, string t) {
        int sum1=0;
        int sum2=0;

    for(char ch : s){
        sum1=sum1+ch;
    }
     for(char ch : t){
        sum2=sum2+ch;
    }
    int result = sum2-sum1;
    return result;

        
        
    }
};