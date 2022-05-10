class Solution {
public:
    int dp[10001];
    bool divisorGame(int n) {
      if(n==1) return 0;
        if(dp[n]>0) return dp[n];
        for(int i=1;i*i<=n;i++){
            if(n%i==0)
                //next player loses the game
                if(divisorGame(n-i)==0)return dp[n]=1;
        }
        return dp[n]=0;
    }
};