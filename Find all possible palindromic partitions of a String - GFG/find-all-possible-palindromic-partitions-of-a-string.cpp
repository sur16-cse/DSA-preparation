// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  bool isPalindrome(string str,int start,int end)
 {
      while(start<=end)
      {
          if(str[start++]!=str[end--])
          return 0;
      }
      return 1;
 }
 void allPalindromicPermsUtil(int index,string str,vector<string> &op,vector<vector<string>> &ans)
 {
     if(index==str.size())
     {
         ans.push_back(op);
         return;
     }
     
     for(int i=index;i<str.size();i++)
     {
         if(isPalindrome(str,index,i))
         {
             op.push_back(str.substr(index,i-index+1));
             allPalindromicPermsUtil(i+1,str,op,ans);
             op.pop_back();
         }
     }
 }
   vector<vector<string>> allPalindromicPerms(string S) {
       // code here
       vector<vector<string>> ans;
       vector< string> op;
      allPalindromicPermsUtil(0,S,op,ans);
       return ans;
       
   }
};
// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        
        cin>>S;

        Solution ob;
        vector<vector<string>> ptr = ob.allPalindromicPerms(S);
        
        for(int i=0; i<ptr.size(); i++)
        {
            for(int j=0; j<ptr[i].size(); j++)
            {
                cout<<ptr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}  // } Driver Code Ends