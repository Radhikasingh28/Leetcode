class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int , int> mp;
        stack <int> st;
        for(int num : nums2){
            while(!st.empty() && num > st.top()){
                mp[st.top()]=num;
                st.pop();
            }
            st.push(num);
        }
        while(!st.empty()){
             mp[st.top()]=-1;
             st.pop();
        }
        for (int i = 0; i < nums1.size(); i++) {
            nums1[i] = mp[nums1[i]];
        }

        return nums1;
    }
};