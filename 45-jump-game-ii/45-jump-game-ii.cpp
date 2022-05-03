class Solution {
public:
    int jump(vector<int>& nums) {
        int jump=0,currfar=0,currend=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            currfar=max(currfar,i+nums[i]);
            if(i==currend)
            {
                jump++;
                currend=currfar;
            }
            if(currend>=nums.size()-1)
               break;
        }
        return jump;
    }
};