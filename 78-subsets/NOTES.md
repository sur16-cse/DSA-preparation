vector<vector<int>> subsets(vector<int>& nums)
{
vector<vector<int> > ans;
vector<int> tmp;
int l = nums.size();
int total = (1<<l);   //total number of possible subsets.
for(int i = 0;i<total;i++)
{
tmp.clear();
for(int j = 0;j<nums.size();j++)
{
if(1<<j & i) //check if that bit is set or not.
{
tmp.push_back(nums[j]);
}
}
ans.push_back(tmp);
}
return(ans);
}