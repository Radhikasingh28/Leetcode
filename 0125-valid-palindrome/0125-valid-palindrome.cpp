class Solution {
public:
    bool isPalindrome(string s) {
        string z = "";

        for (int i = 0; i < s.size(); i++) {

            if (s[i] >= 'a' && s[i] <= 'z') {
                z += s[i];
            }
            else if (s[i] >= 'A' && s[i] <= 'Z') {
                z += (s[i] + 32);
            }
            else if (s[i] >= '0' && s[i] <= '9') {
                z += s[i];
            }
        }

        int left = 0;
        int right = z.size() - 1;

        while (left <= right) {
            if (z[left] != z[right])
                return false;

            left++;
            right--;
        }

        return true;
    }
};