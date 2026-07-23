class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int maxp=0;
        int buy=INT_MAX;
        for(int i=0;i<n;i++){
            int curr=prices[i];
            buy=min(curr,buy);
            int newmax=curr-buy;
            maxp=max(maxp,newmax);

        }
        return maxp;
    }
};
