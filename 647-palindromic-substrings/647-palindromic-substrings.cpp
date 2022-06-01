class Solution {
private:
 string str;
    int n, ans;
    
    void pal(int l, int r) {
        while(l>=0 && r<n && str[l] == str[r]){
            ++ans;
            --l, ++r;
        }
    }
    
public:
    int countSubstrings(string s) {
        str = s, n = s.size(), ans = 0;
        
        for(int i=0; i<n; ++i) {
            pal(i, i);
            pal(i, i+1);
        }
        
        return ans;
    }
};