// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
void helper(string &s1,string &s2,int i,int j,int &count){
    
    if(j==s2.length())
    {
        count++;
        return;
    }
    if(i==s1.length()) return;
    if(s1[i]==s2[j]){
        helper(s1,s2,i+1,j+1,count);
        helper(s1,s2,i+1,j,count);
    }
    else{
        helper(s1,s2,i+1,j,count);
    }
}
    int countWays(string s1, string s2){
        // code here
        int count=0;
        helper(s1,s2,0,0,count);
        return count;
    }
};

// { Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        string S1, S2;
        cin>>S1;
        cin>>S2;
        
        Solution ob;
        cout<<ob.countWays(S1, S2)<<endl;
    }
    return 0;
}  // } Driver Code Ends