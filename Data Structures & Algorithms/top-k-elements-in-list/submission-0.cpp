class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        // Step 1: Count frequency
        for(int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }
        // Step 2: Store {frequency, element}
        vector<pair<int,int>> v;
        for(auto x : mp) {
            v.push_back({x.second, x.first});
        }
        // Step 3: Sort according to frequency
        sort(v.begin(), v.end(), greater<pair<int,int>>());
        // Step 4: Take first k elements
        vector<int> ans;
        for(int i = 0; i < k; i++) {
            ans.push_back(v[i].second);
        }
        return ans;
    }
};