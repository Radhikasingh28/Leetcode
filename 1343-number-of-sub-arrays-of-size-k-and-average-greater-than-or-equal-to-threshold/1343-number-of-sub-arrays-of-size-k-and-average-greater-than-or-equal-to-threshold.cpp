class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        long long  sum=0;
        int count=0;
        long long maxsum=0;
        int left=0;
        for(int rgt=0;rgt<k;rgt++){
            sum+=arr[rgt];
        }
          if(sum >= (long long)k * threshold) {
            count++;
        }
       
        
        for(int rgt=k;rgt<arr.size();rgt++){
            sum=sum+arr[rgt]-arr[rgt-k];
        
       
         if(sum>=(long long)k*threshold){
            count++;
        }
        }
        return count;

    }
};