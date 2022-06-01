class Solution {
   public: 
    void pal(int l, int r,int n,int &ans,string str) {
        while(l>=0 && r<n && str[l] == str[r]){
            ++ans;
            --l, ++r;
        }
    }
    int countSubstrings(string s) {
        int n = s.size(), ans = 0;
        
        for(int i=0; i<n; ++i) {
            pal(i, i,n,ans,s);
            pal(i, i+1,n,ans,s);
        }
        
        return ans;
    }
};