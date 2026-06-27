class Solution {
public:
    int maxDepth(string s) {
        int count =0;
        int max =0;

        for(char ch : s){
            if(ch=='('){
                count++;
                if(count > max){
                    max= count;
                }
            }
            if(ch==')'){
                count--;
            }
        }
        return max;
        
    }
};