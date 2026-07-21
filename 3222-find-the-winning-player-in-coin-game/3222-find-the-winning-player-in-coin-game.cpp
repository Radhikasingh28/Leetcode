class Solution {
public:
    string winningPlayer(int x, int y) {
        int ans = min(x,y/4);
        if(ans%2==1){
            return "Alice";
        }
        return "Bob";


        
    }
};