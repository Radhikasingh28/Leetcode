class Solution {
public:
    long long sumAndMultiply(int n) {
        string s ="";
        int sum =0;
        while(n>0){
            int a = n%10;
            if(a !=0){
                s.push_back(a+'0');
            
            sum+=a;
            }
            n=n/10;
        }
     
        reverse(s.begin(),s.end());
         if (s.empty())
            return 0;
           long long x = stoll(s);
        return x*sum;

        
    }
};