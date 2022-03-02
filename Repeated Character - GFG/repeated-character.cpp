// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
  public:
    char firstRep (string S)
    {
        //code here.
        unordered_map<char,int>m;
        for(int i=0;i<S.size();i++){
            m[S[i]]++;
        }
        for(int i=0;i<m.size();i++){
            if(m[S[i]]>=2)
             return S[i];
        }
        return '#';
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        char res = ob.firstRep (s);
        if (res == '#') cout << -1 << endl;
        else cout << res << endl;
    }
    return 0;
}


  // } Driver Code Ends