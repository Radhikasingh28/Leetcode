class Solution {
public:
    int reverse(int x) {
        long long p =x;
        long long rev =0;
        while(p!=0){
            rev=rev*10+p%10;
            p=p/10;
        }
        if(rev<INT_MIN || rev>INT_MAX)return 0;
        return (int)rev;
    }
};