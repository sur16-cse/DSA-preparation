// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

// A : given string to search
// B : vector of available strings

class Solution
{
public:
map<string,bool>dp;
    int wordBreak(string s, vector<string>& wordDict) {
        if(find(wordDict.begin(), wordDict.end(), s) != wordDict.end())
            return dp[s]=true;
        int n=s.length();  
        if(dp.find(s)!=dp.end())
            return dp[s];
        for(int i=1;i<=s.length();i++)
        {
            string left=s.substr(0,i);
            if(find(wordDict.begin(), wordDict.end(), left) != wordDict.end()&& wordBreak(s.substr(i,n-i),wordDict))
                return dp[left]=true;
        }
        return dp[s]=false;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dict;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dict.push_back(S);
        }
        string line;
        cin>>line;
        Solution ob;
        cout<<ob.wordBreak(line, dict)<<"\n";
    }
}
  // } Driver Code Ends