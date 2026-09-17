class Solution {
public:
    int firstMatchingIndex(string s) {
        int n = s.size();
        if(n<2){
            return 0;
        }
        for(int i =0;i<n;i++) {
            if(s[i] == s[n - i - 1]){
                return i;
            }

        }
        return -1;
    }
};
