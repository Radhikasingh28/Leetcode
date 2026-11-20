class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        vector<int> ans;
        unordered_map<char, int> mp;
        unordered_map<char, int> freq;
        if(p.size() > s.size()) return ans;

        int k = p.size();
        int left = 0;
        for (int i = 0; i < k; i++) {
            freq[p[i]]++;
        }
        for (int i = 0; i < k; i++) {
            mp[s[i]]++;
        }
        if (freq == mp) {
            ans.push_back(left);
        }
        
        for(int i=k;i<s.size();i++){
            mp[s[left]]--;
            if(mp[s[left]]==0){
                mp.erase(s[left]);
            }
            left++;
            mp[s[i]]++;
            if (freq == mp) {
            ans.push_back(left);
        }
        }
        return ans;
    }
};