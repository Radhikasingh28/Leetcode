
class Solution {
public:
    int lower(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;

        while (low < high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] >= target) {
                high = mid;
            }
            else {
                low = mid + 1;
            }
        }

        if (nums.empty() || nums[low] != target) {
            return -1;
        }

        return low;
    }

    int higher(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;

        while (low < high) {
            int mid = low + (high - low + 1) / 2;

            if (nums[mid] <= target) {
                low = mid;
            }
            else {
                high = mid - 1;
            }
        }

        if (nums.empty() || nums[low] != target) {
            return -1;
        }

        return low;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        if (nums.empty()) {
            return {-1, -1};
        }

        return {lower(nums, target), higher(nums, target)};
    }
};
