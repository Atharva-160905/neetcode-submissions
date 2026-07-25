class Solution {
public:
    string minWindow(string s, string t) {

        unordered_map<char,int> needMap;
        unordered_map<char,int> window;

        for(char c : t)
            needMap[c]++;

        int left = 0;

        
        while(left < s.size() && needMap.count(s[left]) == 0)
            left++;

        int right = left;

        int have = 0;
        int need = needMap.size();

        int start = 0;
        int minLen = INT_MAX;

        while(right < s.size()){

            window[s[right]]++;

            if(needMap.count(s[right]) &&
               window[s[right]] == needMap[s[right]])
                have++;

            while(have == need){

                if(right-left+1 < minLen){
                    minLen = right-left+1;
                    start = left;
                }

                window[s[left]]--;

                if(needMap.count(s[left]) &&
                   window[s[left]] < needMap[s[left]])
                    have--;

                left++;

            }

            right++;
        }

        if(minLen == INT_MAX)
            return "";

        return s.substr(start,minLen);
    }
};