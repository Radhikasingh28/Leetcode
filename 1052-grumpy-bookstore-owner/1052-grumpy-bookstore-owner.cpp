class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int count = 0;
        int excount = 0;

        for (int i = 0; i < customers.size(); i++) {
            if (grumpy[i] == 0) {
                count += customers[i];
            }
        }
        int maxi = 0;
        int left=0;
        for (int i = 0; i < minutes; i++) {
            if (grumpy[i] == 1) {
                excount += customers[i];
            }
        }
        maxi=excount;
        for(int i=minutes;i<customers.size();i++){
            if(grumpy[left]==1){
                excount-=customers[left];
            }
            left++;
            if(grumpy[i]==1){
                excount+=customers[i];
            }
            maxi = max(maxi,excount);
        }
        return count+maxi;
    }
};