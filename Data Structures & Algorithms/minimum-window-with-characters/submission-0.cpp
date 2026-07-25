class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>mp2;
        for(int i=0;i<t.size();i++){
            mp2[t[i]]++;
        }
        int left=0;
        int right=0;
        unordered_map<char,int>window;
        int have=0;
        int need=mp2.size();

        int start=0;
        int minLen=INT_MAX;

        while(right<s.size()){
            window[s[right]]++;
            if(mp2.count(s[right]) && window[s[right]]==mp2[s[right]]){
                have++;
            }
            while(have==need){
                if(right-left+1<minLen){
                    minLen=right-left+1;
                    start=left;
                }
                window[s[left]]--;
                if(mp2.count(s[left])&&
                    window[s[left]]<mp2[s[left]]){
                        have--;
                    }
                    left++;
            }
            right++;
        }
        if(minLen==INT_MAX)
        return "";
        return s.substr(start,minLen);
    }
};
