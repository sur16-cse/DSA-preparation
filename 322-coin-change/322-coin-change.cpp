class Solution {
public:
    int t[10001][13];
    int get(vector<int>&coins,int n,int amount){
        if(amount==0 || n==0)
        return (amount == 0) ? 0 : INT_MAX - 1;
        
        if(t[amount][n]!=-1)return t[amount][n];
        
        else if(coins[n-1]>amount)
         return t[amount][n]=get(coins,n-1,amount);
        
        else if(coins[n-1]<=amount)
         return t[amount][n]=min(1+get(coins,n,amount-coins[n-1]),get(coins,n-1,amount));
        
        else
          return t[amount][n]= -1;
        
       
    }
    int coinChange(vector<int>& coins, int amount) {
        memset(t,-1,sizeof(t));
        int n=coins.size();
        int ans=get(coins,n,amount);
         return ans == INT_MAX - 1 ? -1 : ans;   
        
    }
};