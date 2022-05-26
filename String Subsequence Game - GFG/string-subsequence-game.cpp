// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  void helper(string s,string tmp,unordered_set<char>&vowel,set<string>&ans){
      if (s.empty()) {
        if(vowel.find(tmp[0])!=vowel.end() && vowel.find(tmp[tmp.length()-1])==vowel.end())
        ans.insert(tmp);
        return;
    }

    helper(s.substr(1),tmp + s[0],vowel,ans);
 
    helper(s.substr(1), tmp,vowel,ans);
  }
    set<string> allPossibleSubsequences(string s) {
        // code here
        unordered_set<char>vowel={'a','e','i','o','u'};
        set<string>ans;
        string tmp="";
        helper(s,tmp,vowel,ans);
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        set<string> ans = ob.allPossibleSubsequences(S);
        if (ans.size() == 0)
            cout << -1 << endl;
        else {
            for (auto i : ans) cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}
  // } Driver Code Ends