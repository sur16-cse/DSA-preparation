class Solution {
public:
    int getmax(int h,vector<int>&cuts){
        sort(cuts.begin(),cuts.end());
        int n=cuts.size();
        int maxh=max(h-cuts[n-1],cuts[0]);
        for(int i=1;i<n;i++){
            maxh=max(maxh,cuts[i]-cuts[i-1]);
        }
        return maxh;
    }
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        return (int)((long)(getmax(h,horizontalCuts)*(long)getmax(w,verticalCuts))%1000000007);
    }
};