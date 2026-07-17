class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>>ans;
        for(int i=0;i<strs.size();i++){
            string str=strs[i];
            sort(str.begin(),str.end());
            ans[str].push_back(strs[i]);
        }
        vector<vector<string>>result;
        for(auto x:ans){
            result.push_back(x.second);
        }
        return result;
    }
};
