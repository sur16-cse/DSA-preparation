class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        vector<int>a(26,0);
        vector<int>b(26,0);
        for(int i=0;i<s.length();i++){
             a[s[i]-'a']++;
        }
        for(int i=0;i<target.length();i++){
             b[target[i]-'a']++;
        }
        int minm=INT_MAX,ans=0;
       for(int i=0;i<target.length();i++)
           minm=min(minm,a[target[i]-'a']/b[target[i]-'a']);
        return minm;
    }
};