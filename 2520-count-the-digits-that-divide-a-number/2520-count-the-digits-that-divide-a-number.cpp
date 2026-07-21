class Solution {
public:
    int countDigits(int num) {
        int cnt =0;
        int oNum = num;
       while(num>0){
        int a = num%10;
        if(num!=0 && oNum%a==0){
            cnt ++;

        }
        num = num/10;
       }
       return cnt;
        
    }
};