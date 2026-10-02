class Solution {
public:
    const long long mod = 1000000007;

    long long power(long long base, long long n) {

        if (n == 0)
            return 1;

        long long half = power(base, n / 2);

        if (n % 2 == 0) {
            return (half * half) % mod;
        }
        else {
            return (((base % mod) * half) % mod * half) % mod;
        }
    }

    int minNonZeroProduct(int p) {

        long long maxnum = (1LL << p) - 1;

        long long base = maxnum - 1;

        long long ex = (1LL << (p - 1)) - 1;

        long long ans = power(base, ex);

        ans = (ans * (maxnum % mod)) % mod;

        return ans;
    }
};