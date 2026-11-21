
class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {

        int left = 0;
        int ans = 0;

        for (int right = 0; right < nums.size(); right++) {

            if (nums[right] > threshold) {
                left = right + 1;
            }

            else if (left == right && nums[right] % 2 != 0) {
                left = right + 1;
            }

            else if (right > left && nums[right] % 2 == nums[right - 1] % 2) {
                if (nums[right] % 2 == 0) {
                    left = right;
                } else {
                    left = right + 1;
                }
            }

            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};