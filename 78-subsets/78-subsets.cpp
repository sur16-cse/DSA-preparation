class Solution {
public:
    void solve(vector<int>nums,int i,int n,vector<vector<int>>&ans,vector<int>&res){
        if(i==n){
            ans.push_back(res);
            return;
        }
        res.push_back(nums[i]);
         solve(nums,i+1,n,ans,res);
        res.pop_back();
         solve(nums,i+1,n,ans,res);
    }
        
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>res;
        solve(nums,0,nums.size(),ans,res);
        return ans;
    }
};