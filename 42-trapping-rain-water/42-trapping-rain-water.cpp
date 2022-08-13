class Solution {
public:
    int trap(vector<int>& arr) {
        int l=0,r=arr.size()-1,left=INT_MIN,right=INT_MIN,res=0;
        while(l<=r){
            if(arr[l]<=arr[r]){
                if(arr[l]>left)
                    left=arr[l];
                else
                    res+=left-arr[l];
                l++;
            }
            else{
                if(arr[r]>right)
                    right=arr[r];
                else
                    res+=right-arr[r];
                r--;
            }
        }
        return res;
    }
};