class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int,int>mp1;
        unordered_map<int,int>mp2;
        for(int i=0;i<s.length();i++){
            mp1[s[i]]++;
        }
        for(int j=0;j<t.length();j++){
            mp2[t[j]]++;
        }
        if(mp1==mp2){
            return true;
        }
        return false;
    }
};
