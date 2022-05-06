class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int ans=0;
        for(auto j:mp){
            if(k==0){
                if(j.second>1)
                ans++;
            }
            else if(mp.find(j.first+k)!=mp.end())
                ans++;
        }
        return ans;
    }
};