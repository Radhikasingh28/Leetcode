class Solution {
public:
    int smallestNumber(int n, int t) {
     

        for(int i = n ; i<=100 ; i++){
               int mul =1;
               int temp =i;
            while(temp>0){
                int a = temp%10;
                mul=mul*a;
                temp=temp/10;
                
            }
            if(mul % t ==0){
              return i;
            }
             
        }
        return -1;
      
        
    }
};