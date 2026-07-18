class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       vector<int>lft(nums.size());
       int lftp=1;
       for(int i=0;i<nums.size();i++){
        lft[i]=lftp;
        lftp*=nums[i];
       } 
        int rgtp=1;
       for(int j=nums.size()-1;j>=0;j--){
        lft[j]*=rgtp;
        rgtp*=nums[j];
       }
       return lft;
    }
};
