
class Solution {
public:
    int largestInteger(int num) {
        string s = to_string(num);

        vector<int> even, odd;

        for (char c : s) {
            int digit = c - '0';

            if (digit % 2 == 0)
                even.push_back(digit);
            else
                odd.push_back(digit);
        }

        sort(even.rbegin(), even.rend());
        sort(odd.rbegin(), odd.rend());

        int i = 0, j = 0;

        for (int k = 0; k < s.size(); k++) {
            int digit = s[k] - '0';

            if (digit % 2 == 0)
                s[k] = even[i++] + '0';
            else
                s[k] = odd[j++] + '0';
        }

        return stoi(s);
    }
};
