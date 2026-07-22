class Solution {
public:
    bool hasAlternatingBits(int n) {
        int pre = n&1;
        n>>=1;
        while(n>0){
            int curr = n&1;
            if(curr==pre)return false;
            pre = curr;
            n>>=1;

        }
        return true;
        
        
    }
};