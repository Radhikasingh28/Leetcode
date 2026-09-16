class Solution {
public:
    bool isPalindrome(int x) {

        int original = x;
        long long sum = 0;

        while(x > 0) {

            int a = x % 10;

            sum = sum * 10 + a;

            x = x / 10;
        }

        return sum == original;
    }
};