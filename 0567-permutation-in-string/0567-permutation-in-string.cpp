class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int>mp;
        unordered_map<char, int>freq;
        if(s1.size() > s2.size()) return false;
        int left=0;
        int k = s1.size();
        for(int i=0;i<k;i++){
            mp[s1[i]]++;
        }
         for(int i=0;i<k;i++){
            freq[s2[i]]++;
        }
        if(freq==mp){
            return true;
        }
        for(int i=k;i<s2.size();i++){
            freq[s2[left]]--;
            if(freq[s2[left]]==0){
                freq.erase(s2[left]);
            }
            left++;
            freq[s2[i]]++;
            if(freq==mp){
            return true;
        } 
        }
        return false;


    }
};