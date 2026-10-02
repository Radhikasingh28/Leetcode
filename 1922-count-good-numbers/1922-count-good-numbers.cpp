class Solution {
public:
int pow(int base , long long n ){
    const long long mod = 1000000007;
    if(n==0)return 1;
    long long half= pow(base,n/2);
    if(n%2==0){
        return (half*half)%mod;
    }
    else{
        return (base * half%mod * half)%mod;
    }
}
    int countGoodNumbers(long long n) {
        long long odd = n/2;
        long long even = (n+1)/2;
         const long long mod = 1000000007;
        
            long long evenpart= pow(5,even);
 
            long long oddpart= pow(4,odd);
        
        return(evenpart*oddpart)%mod;


        
    }
};