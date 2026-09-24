class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        int MOD = 1e9 + 7;
        int n = nums.size();

        sort(nums.begin(), nums.end());

        vector<long long> power(n);
        power[0] = 1;

        for (int i = 1; i < n; i++) {
            power[i] = (power[i - 1] * 2) % MOD;
        }

        int left = 0;
        int rgt = n - 1;
        long long ans = 0;

        while (left <= rgt) {

            if (nums[left] + nums[rgt] <= target) {
                ans = (ans + power[rgt - left]) % MOD;
                left++;
            }
            else {
                rgt--;
            }
        }

        return ans;
    }
};