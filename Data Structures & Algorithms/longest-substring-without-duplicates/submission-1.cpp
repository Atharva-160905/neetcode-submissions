class Solution {
   public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        unordered_set<char> st;
        int i = 0;
        int ans = 0;
        for (int k = 0; k < n; k++) {
            while (st.count(s[k])) {
                st.erase(s[i]);
                i++;
            }
            st.insert(s[k]);
            ans = max(ans, k - i + 1);
        }
        return ans;
    }
};