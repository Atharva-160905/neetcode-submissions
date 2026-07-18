class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       vector<int>lft;
       vector<int>rgt(nums.size());
       int lftp=1;
       for(int i=0;i<nums.size();i++){
        lft.push_back(lftp);
        lftp*=nums[i];
       } 
        int rgtp=1;
       for(int j=nums.size()-1;j>=0;j--){
        rgt[j]=rgtp;
        rgtp*=nums[j];
       }
       vector<int>res;
       for(int k=0;k<nums.size();k++){
        int ans=lft[k]*rgt[k];
        res.push_back(ans);
       }
       return res;
    }
};
