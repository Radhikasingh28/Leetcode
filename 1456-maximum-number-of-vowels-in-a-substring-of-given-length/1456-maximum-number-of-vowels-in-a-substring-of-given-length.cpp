class Solution {
public:
    int maxVowels(string s, int k) {
        int count = 0;
        int maxcount = 0;
        int left = 0;
        for (int i = 0; i < k; i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
                s[i] == 'u') {
                count++;
            }
        }
        maxcount = count;
        for (int i = k; i < s.size(); i++) {
            if (s[left] == 'a' || s[left] == 'e' || s[left] == 'i' ||
                s[left] == 'o' || s[left] == 'u') {
                count--;
            }

            left++;

            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
                s[i] == 'u') {
                count++;
            }

            maxcount = max(maxcount, count);
        }

        return maxcount;
    }
};