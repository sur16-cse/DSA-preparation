class Solution {
public:
    void rec(int index,int target,vector<int>&arr,vector<vector<int>>&res, vector<int>&ds){
        
        if(index==arr.size())
        {
            if(target==0)
                res.push_back(ds);
            return;
        }
        
        if(arr[index]<=target){
            ds.push_back(arr[index]);
            rec(index,target-arr[index],arr,res,ds);
            ds.pop_back();
        }
        
        rec(index+1,target,arr,res,ds);
    }
    vector<vector<int>> combinationSum(vector<int>& can, int target) {
        vector<vector<int>>res;
        vector<int>ds;
        rec(0,target,can,res,ds);
        return res;
    }
};