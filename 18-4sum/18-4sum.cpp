class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
         vector<vector<int>>res;
        if(nums.size()==0)
            return res;
       
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                int target2=target-nums[j]-nums[i];
                int s=j+1;
                int e=nums.size()-1;
                while(s<e){
                    if(nums[s]+nums[e]==target2){
                    res.push_back({nums[i],nums[j],nums[s],nums[e]});
                    while(s<e && nums[s]==nums[s+1])s++;
                    while(s<e && nums[e]==nums[e-1])e--;
                    //s++,e--;
                }
               if(nums[s]+nums[e]>target2)
                    e--;
                else
                    s++;
            }
                while(j+1<nums.size() && nums[j]==nums[j+1])j++;
        }
            while(i+1<nums.size() && nums[i]==nums[i+1])i++;
        }
        return res;
    }
};