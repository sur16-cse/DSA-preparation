class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        long long int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        int n=nums.size();
        long long int minm=LLONG_MAX,cnt=0,index=0;
        for(int i=0;i<nums.size();i++){
             cnt+=nums[i];
            long long left=0,right=0;
            left=cnt/(i+1);
            if(i<n-1)
                right=(sum-cnt)/(n-i-1);
            int diff=abs(left-right);
             if(diff<minm){
                minm=diff;
                index=i;
            }
        }
        return index;
    }
};