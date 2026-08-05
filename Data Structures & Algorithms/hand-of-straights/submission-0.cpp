class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n=hand.size();
        if(n % groupSize!=0) return false;
        unordered_map<int,int>mp;
        sort(hand.begin(),hand.end());
        for(int i=0;i<n;i++){
            mp[hand[i]]++;
        }

        for(int x:hand){
            if(mp[x]==0)
                continue;
            
            for(int i=0;i<groupSize;i++){
                if(mp[x+i]==0){
                return false;}

                mp[x+i]--;
            }

        }
        return true;
        

    }
};
