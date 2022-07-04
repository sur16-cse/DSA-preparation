class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        unordered_map<string,vector<string>>ans;
        for(int i=0;i<n;i++){
            string a=strs[i];
            sort(strs[i].begin(),strs[i].end());
            ans[strs[i]].push_back(a);
        }
         vector<vector<string>> an;
        for(auto it:ans)
        {
            an.push_back(it.second);
        }
       return an;
    }
};