class Solution {
public:
double power(double x , int n){
     if(x==0)return 0;
        if(n==0)return 1;
        double half = power(x,n/2);
        if(n%2==0){
            return half*half;
        }else{
            return x*half*half;
        }

       
}
    double myPow(double x, int n) {
         long long p = n;

        if (p < 0)
            return 1.0 / power(x, -p);

        return power(x, p);
      

    }
};