class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            int x=nums[i];
            int y=target-nums[i];
        //if y does not exist previously then return index of that case for duplicates 
            if(mp.find(y)!=mp.end())
                return {i,mp[y]};
        //inserting at end so that duplicates get handled
            mp[nums[i]]=i;
        }
        return {-1,-1};
    }
};