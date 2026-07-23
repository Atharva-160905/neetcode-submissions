class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>mp;
        int ans=0;
        int left=0;
        int maxfreq=0;
        for(int right=0;right<s.size();right++){
                mp[s[right]]++;
            
            maxfreq=max(maxfreq,mp[s[right]]);
            int window=right-left+1;
            while((right-left+1)-maxfreq>k){
                mp[s[left]]--;
                left++;
            }
            ans=max(ans,right-left+1);
        }
        return ans;
    }
};
