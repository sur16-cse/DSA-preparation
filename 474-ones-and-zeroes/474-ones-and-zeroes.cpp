class Solution {
public:
   vector<vector<vector<int>>> memo;
    
    int OnesZerosMemo(vector<string>& strs, int i, int m, int n)
    {
        if(i == strs.size() || m < 0 || n < 0) 
            return 0;
        
        if(memo[i][m][n] != 0) 
            return memo[i][m][n];
        
        int ones = count(strs[i].begin(), strs[i].end(), '1');
        int zeros = strs[i].length() - ones;
        
        if(zeros <= m && ones <= n) { 
            return memo[i][m][n] = max(1 + OnesZerosMemo(strs, i + 1, m - zeros, n - ones), OnesZerosMemo(strs, i + 1, m, n));
        }
        
        else{
            return memo[i][m][n] = OnesZerosMemo(strs, i + 1, m, n);
        }
    }
    
    int findMaxForm(vector<string>& strs, int m, int n) {
        memo.resize(size(strs), vector<vector<int> >(m + 1, vector<int>(n + 1)));
        return OnesZerosMemo(strs, 0, m, n);
    }
};