class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int>dp(n,0);
        dp[0]=1;
        int p1=0,p2=0,p3=0;
        for(int i=1;i<n;i++){
            int f1=2*dp[p1];
            int f2=3*dp[p2];
            int f3=5*dp[p3];
            int minm=min(f3,min(f2,f1));
            dp[i]=minm;
            if(minm==f1)p1++;
            if(minm==f2)p2++;
            if(minm==f3)p3++;
        }
        for(int i=0;i<n;i++){
            cout<<dp[i]<<" ";
        }
        return dp[n-1];
    }
};