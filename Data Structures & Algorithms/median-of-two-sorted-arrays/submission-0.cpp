class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merged;
        int m = nums1.size();
        int n = nums2.size();

        // Merge both arrays
        for (int i = 0; i < m; i++) {
            merged.push_back(nums1[i]);
        }
        for (int i = 0; i < n; i++) {
            merged.push_back(nums2[i]);
        }

        // Sort the merged array
        sort(merged.begin(), merged.end());

        int total = merged.size();

        // Find median
        if (total % 2 == 1) {
            return merged[total / 2];  // Odd length → middle element
        } else {
            return (merged[total / 2 - 1] + merged[total / 2]) / 2.0;  // Even length → average of two middle elements
        }
    }
};
