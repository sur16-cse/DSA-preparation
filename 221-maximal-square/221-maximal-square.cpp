class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int rows=matrix.size();
        int col=matrix[0].size();
        vector<vector<int>>dp(rows+1,vector<int>(col+1,0));
        int largest=INT_MIN;
        for(int i=1;i<=rows;i++){
            for(int j=1;j<=col;j++){
                if(matrix[i-1][j-1]=='1'){
                    dp[i][j]=min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]))+1;
                }
                if(largest<dp[i][j])
                    largest=dp[i][j];
            }
        }
        return largest*largest;
    }
};