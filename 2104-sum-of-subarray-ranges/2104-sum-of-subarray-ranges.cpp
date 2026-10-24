
class Solution {
public:
    long long subArrayRanges(vector<int>& a) {
        int n = a.size();

        vector<int> psee(n), nse(n);
        vector<int> pgee(n), nge(n);
        vector<int> st;

        // Previous Smaller or Equal
        for (int i = 0; i < n; i++) {
            while (!st.empty() && a[st.back()] > a[i])
                st.pop_back();

            psee[i] = st.empty() ? -1 : st.back();
            st.push_back(i);
        }

        st.clear();

        // Next Smaller
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && a[st.back()] >= a[i])
                st.pop_back();

            nse[i] = st.empty() ? n : st.back();
            st.push_back(i);
        }

        st.clear();

        // Previous Greater or Equal
        for (int i = 0; i < n; i++) {
            while (!st.empty() && a[st.back()] < a[i])
                st.pop_back();

            pgee[i] = st.empty() ? -1 : st.back();
            st.push_back(i);
        }

        st.clear();

        // Next Greater
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && a[st.back()] <= a[i])
                st.pop_back();

            nge[i] = st.empty() ? n : st.back();
            st.push_back(i);
        }

        long long minSum = 0, maxSum = 0;

        for (int i = 0; i < n; i++) {
            long long left = i - psee[i];
            long long right = nse[i] - i;
            minSum += 1LL * a[i] * left * right;

            left = i - pgee[i];
            right = nge[i] - i;
            maxSum += 1LL * a[i] * left * right;
        }

        return maxSum - minSum;
    }
};
