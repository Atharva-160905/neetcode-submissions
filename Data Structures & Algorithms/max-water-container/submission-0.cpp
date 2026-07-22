class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxx=INT_MIN;
        int n=heights.size();
        int i=0;
        int j=n-1;
        while(i<j){
            int minn=min(heights[i],heights[j]);
            int width=j-i;
            int area=minn*width;
            maxx=max(area,maxx);
            if(heights[i]<heights[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return maxx;
    }
};
