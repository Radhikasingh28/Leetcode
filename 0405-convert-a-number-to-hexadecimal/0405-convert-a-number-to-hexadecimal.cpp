class Solution {
public:
    string toHex(int num) {
        unsigned int n = num;
        string ans ="";
        if(n==0)return "0";
        while(n!=0){
            int digit = n & 15;
            if(digit < 10){
                ans+=('0'+digit);

            }else{
                ans +=('a'+digit-10);
            }
            n>>=4;
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};