class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        

        for(int start=0;start<gas.size();start++){
            int tank=0;
            int n=gas.size();
            bool possible=true;
            for(int k=0;k<gas.size();k++){
                int j=(start+k)%n;
                tank+=gas[j];
                tank-=cost[j];

                if(tank<0){
                    possible=false;
                    break;
                }
            }
            if(possible)return start;
        }
        return -1;
    }
};
