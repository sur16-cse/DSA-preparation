class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>a;
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            if(a.find(target-nums[i])!=a.end())
            {
                v.push_back(a[target-nums[i]]);
                v.push_back(i);
            }
            else
                a[nums[i]]=i;
        }
        return v;
    }
};