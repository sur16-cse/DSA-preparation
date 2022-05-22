class Solution {
public:

    int maximumBags(vector<int>& C, vector<int>& R, int add) {
        int n=size(R), cnt=0;
    for(int i=0;i<n;i++) R[i]=C[i]-R[i];
    sort(begin(R),end(R));
    for(int i:R){
        if(i-add>0) break;
        cnt++;   add-=i;
    }
    return cnt;
    }
};