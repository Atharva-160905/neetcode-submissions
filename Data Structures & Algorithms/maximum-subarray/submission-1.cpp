class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsub=nums[0];
        int best=nums[0];
        int n=nums.size();
        for(int i=1;i<n;i++){
            maxsub+=nums[i];
            maxsub=max(maxsub,nums[i]);
            best = max(best,maxsub);
        }
        return best;
    }
};
