class Solution {
public:
    int reverseDegree(string s) {
     
       int sum =0;
       for(int i =0;i<s.size();i++){
        int idx = 'z'-s[i]+1;
        sum = sum+(i+1)*idx;
       }
       return sum;
    }
};