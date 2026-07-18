class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        sort(nums.begin(), nums.end());
        int count = 1;
        int maxCount = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) {
                continue;  // Duplicate, ignore
            } else if (nums[i] == nums[i - 1] + 1) {
                count++;  // Consecutive
            } else {
                count = 1;  // Break in sequence
            }
            maxCount = max(maxCount, count);
        }
        return maxCount;
    }
};