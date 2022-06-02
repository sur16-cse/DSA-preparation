class Solution {
public:
    int dp[101];
    int robber(vector<int>& nums,int i){
    if(i>=nums.size()){
        return 0;
    }
        if(dp[i]!=-1) return dp[i];
        int incCurrent=nums[i]+robber(nums,i+2);
        int excCurrent=robber(nums,i+1);
        dp[i]=max(incCurrent,excCurrent);
        return dp[i];
    }
    int rob(vector<int>& nums) {
       
        memset(dp,-1,sizeof(dp));
        return robber(nums,0);
    }
};