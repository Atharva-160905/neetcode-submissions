class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }
         int longest=0;
        for(int i=0;i<nums.size();i++){

            if(!st.count(nums[i]-1)){
                int curr=nums[i];
                int len=1;

                while(st.count(curr+1)){
                    len++;
                    curr++;
                }
                longest=max(longest,len);
            }
        }
        return longest;
    }
};
