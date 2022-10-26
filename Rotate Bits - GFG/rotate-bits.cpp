//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

#define SHORT_SIZE 16
class Solution
{
  public:
        vector <int> rotate (int x, int d)
        {
            //code here.
            d=d%16;
            int left=((x << d) | (x >> (SHORT_SIZE - d)))&65535;
            int right=((x >> d) | (x << (SHORT_SIZE - d)))&65535;
            return {left,right};
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        
        int n, d; cin >> n >> d;
        Solution ob;
        vector <int> res = ob.rotate (n, d);
        cout << res[0] << endl << res[1] << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends