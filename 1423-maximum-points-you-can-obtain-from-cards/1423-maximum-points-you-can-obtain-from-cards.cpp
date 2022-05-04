class Solution {
public:
    int maxScore(vector<int>& a, int k) {
        int n=a.size();
        int sum=0;
        for(int i=n-k;i<n;i++){
            sum+=a[i];
        }
        int sum2=0;
        for(int i=0,sum2=sum;i<k;i++){
            sum2-=a[n-k+i];
            sum2+=a[i];
            sum=max(sum,sum2);
        }
        return sum;
    }
};