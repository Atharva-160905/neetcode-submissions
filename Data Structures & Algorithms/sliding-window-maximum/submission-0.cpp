class Solution {
   public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;

        int left = 0;
        int right = k - 1;

        while (right < nums.size()) {
            int maxi = nums[left];

            for (int i = left; i <= right; i++) {
                maxi = max(maxi, nums[i]);
            }

            ans.push_back(maxi);

            left++;
            right++;
        }

        return ans;
    }
};