class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp;
        stack<int>stk;
        int n=nums2.size();
        if(nums2.size()==0)
            return {-1};
        mp[nums2[n-1]]=-1;
        stk.push(n-1);
        for(int i=n-2;i>=0;i--){
         while(!stk.empty() && nums2[stk.top()]<=nums2[i])
             stk.pop();
         if(stk.empty()){
            mp[nums2[i]]=-1; 
           //continue;
        } 
        else
        mp[nums2[i]]=nums2[stk.top()];
        stk.push(i);
        }
       vector<int>ans;
        for(int i=0;i<nums1.size();i++){
            if(mp.find(nums1[i])!=mp.end())
                ans.push_back(mp[nums1[i]]);
        }
        return ans;
    }
};