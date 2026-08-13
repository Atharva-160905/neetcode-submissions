class Solution {
public:
    int reverse(int x) {
        bool isN=(x<0);
        string str=to_string(abs(x));
        std::reverse(str.begin(), str.end());
        long long ans=stoll(str);
        if(isN) ans=-ans;
        if(ans>INT_MAX || ans<INT_MIN)return 0;
        return (int)ans;
    }
};
