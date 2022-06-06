class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       int n=strs.size();
        if(n==0) return "";
        if(n==1) return strs[0];
        sort(strs.begin(),strs.end());
        string a=strs[0],b=strs[n-1];
        //int minm=min(a.size(),a)
        int i=0,j=0;
        while(i<a.size() && a[i]==b[j]){
            i++;j++;
        }
        string ans=b.substr(0,i);
        return ans;
    }
};