class Solution {
public:
int gcd(int a, int b) {
    while (b != 0) {
        int rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}
    int gcdOfOddEvenSums(int n) {
        int evensum=0;
        int oddsum=0;

       for(int i=1;i<=n*2;i++){
        if(i%2!=0){
            oddsum+=i;

        }else{
            evensum+=i;
        }
       }
     return  gcd(evensum,oddsum);

        
    }
};