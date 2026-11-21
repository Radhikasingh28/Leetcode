class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char,int>mp;
        int left=0;
         int ans=0;
         int maxi=0;
         for(int i=0;i<s.size();i++){
            mp[s[i]]++;
            while(mp[s[i]]>2){
                mp[s[left]]--;
                if(mp[s[left]]==0){
                    mp.erase(s[left]);
                }
                left++;
            }
            maxi=i-left+1;
            ans=max(maxi,ans);

         }
         return ans;


    }
};