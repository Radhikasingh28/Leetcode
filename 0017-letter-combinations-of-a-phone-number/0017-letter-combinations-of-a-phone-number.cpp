class Solution {
public:

    vector<string> ans;

    void solve(int index, string digits, string current) {

        // Base case
        if (index == digits.size()) {
            ans.push_back(current);
            return;
        }

        // Phone keypad mapping
        string mapping[10] = {
            "", "", "abc", "def", "ghi",
            "jkl", "mno", "pqrs", "tuv", "wxyz"
        };

        // Current digit ke corresponding letters
        string letters = mapping[digits[index] - '0'];

        // Har letter ko try karo
        for (char ch : letters) {

            // Choose
            current.push_back(ch);

            // Next digit
            solve(index + 1, digits, current);

            // Backtrack
            current.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {

        if (digits.empty()) {
            return {};
        }

        solve(0, digits, "");

        return ans;
    }
};