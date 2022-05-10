class Solution {
public:
    int dp[45+1];
    int climbStairs(int n) {
        if(n==0 || n==1){
            return 1;
        }
        if(dp[n]>0)
            return dp[n];
       int left=climbStairs(n-1);
      int right= climbStairs(n-2);
        dp[n]=left+right;
        return left+right;
    }
};