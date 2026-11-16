class Solution {
public:
    int sqrt(int x){

    
        int ans =0;
        int low=0;
        int high=x;
        while(low<=high){
            long long  mid=low +(high-low)/2;
            if(mid*mid <=x){
                ans=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
    }
    bool isPerfectSquare(int num) {
        if(sqrt(num)*sqrt(num)==num){
            return true;
        }
        return false;
    }
};