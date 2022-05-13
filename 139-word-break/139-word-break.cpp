class Solution {
public:
   unordered_map<string,int>mp;
    int dp[301];
    bool breakW(string s, vector<string>&word,int i){
        if(s.length()==i)
            return dp[i]=1;
        if(dp[i]!=-1)return dp[i];
        for(int j=i;j<s.length();j++){
            string left=s.substr(i,j-i+1);
            if(mp.find(left)!=mp.end()){
                //string right=s.substr(j+1);
               bool ans= breakW(s,word,j+1);
                if(ans==true) return dp[i]=1;
            }
        }
        return dp[i]=0;;
    }
   
    bool wordBreak(string s, vector<string>& wordDict) {
        memset(dp,-1,sizeof(dp));
        for(int i=0;i<wordDict.size();i++){
            mp[wordDict[i]]++;
        }
        bool res=breakW(s,wordDict,0);
        return res;
    }
};