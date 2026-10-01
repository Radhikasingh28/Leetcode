class Solution {
public:
void solve(int idx, vector<int>& digits, vector<int>& freq,
               int num, vector<int>& ans) {

   
        if (idx == 3) {
            ans.push_back(num);
            return;
        }

        for (int digit = 0; digit <= 9; digit++) {

          
            if (freq[digit] == 0)
                continue;

        
            if (idx == 0 && digit == 0)
                continue;

         
            if (idx == 2 && digit % 2 != 0)
                continue;

       
            freq[digit]--;

            solve(idx + 1, digits, freq,
                  num * 10 + digit, ans);

     
            freq[digit]++;
        }
    }
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> freq(10, 0);

       
        for (int digit : digits) {
            freq[digit]++;
        }

        vector<int> ans;

        solve(0, digits, freq, 0, ans);

        return ans;

        
    }
};