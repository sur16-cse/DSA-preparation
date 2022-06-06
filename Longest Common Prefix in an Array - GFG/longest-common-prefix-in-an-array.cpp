// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
  string common(string a,string b){
      int minm=(a.length(),b.length());
      string str="";
    for(int i=0;i<minm;i++){
        
        if(a[i]!=b[i]) break;
        str+=a[i];
    }
      return (str);
  }
    
    string longestCommonPrefix (string arr[], int N)
    {
        // your code here
        string prefix=arr[0];
        for(int i=1;i<N;i++){
            prefix=common(arr[i],prefix);
        }
        if(prefix.size()!=0)
        return (prefix);
        else
        return "-1";
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends