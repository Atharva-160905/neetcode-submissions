class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        if (s1.size() > s2.size()) return false;

        unordered_map<char, int> mp1, mp2;

        // s1 frequency
        for (char c : s1)
            mp1[c]++;

        int window = s1.size();

        // first window
        for (int i = 0; i < window; i++)
            mp2[s2[i]]++;

        if (mp1 == mp2)
            return true;

        // slide window
        for (int right = window; right < s2.size(); right++) {

            mp2[s2[right]]++;                    // add new character

            mp2[s2[right - window]]--;           // remove old character

            if (mp2[s2[right - window]] == 0)
                mp2.erase(s2[right - window]);   // remove zero count

            if (mp1 == mp2)
                return true;
        }

        return false;
    }
};