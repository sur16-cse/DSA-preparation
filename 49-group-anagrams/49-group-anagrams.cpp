class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& s) {
        int n=s.size();
        unordered_map<string,vector<string>>mp;
        string str;
        for(int i=0;i<n;i++)
        {   str=s[i];
            sort(s[i].begin(),s[i].end());
            //put into the map
            mp[s[i]].push_back(str);
        }
        vector<vector<string>> ans;
        for(auto it:mp)
        {
            ans.push_back(it.second);
        }
       return ans;
    }
};