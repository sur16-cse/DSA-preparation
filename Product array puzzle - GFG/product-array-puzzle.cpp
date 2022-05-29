// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& a, int n) {
      long prod = 1;
    long flag = 0;

    // product of all elements
    for (int i = 0; i < n; i++) {

        // counting number of elements
        // which have value
        // 0
        if (a[i] == 0)
            flag++;
        else
            prod *= a[i];
    }

    // creating a new array of size n
   
   vector<long long int>arr(n);

    for (int i = 0; i < n; i++) {

        // if number of elements in
        // array with value 0
        // is more than 1 than each
        // value in new array
        // will be equal to 0
        if (flag > 1) {
            arr[i] = 0;
        }

        // if no element having value
        // 0 than we will
        // insert product/a[i] in new array
        else if (flag == 0)
            arr[i] = (prod / a[i]);

        // if 1 element of array having
        // value 0 than all
        // the elements except that index
        // value , will be
        // equal to 0
        else if (flag == 1 && a[i] != 0) {
            arr[i] = 0;
        }

        // if(flag == 1 && a[i] == 0)
        else
            arr[i] = prod;
    }
    return arr;
    }
};


// { Driver Code Starts.
int main()
 {
    int t;  // number of test cases
    cin>>t;
    while(t--)
    {
        int n;  // size of the array
        cin>>n;
        vector<long long int> arr(n),vec(n);
        
        for(int i=0;i<n;i++)    // input the array
        {
            cin>>arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr,n);   // function call
        
        for(int i=0;i<n;i++)    // print the output
        {
            cout << vec[i] << " ";
        }
        cout<<endl;
    }
	return 0;
}  // } Driver Code Ends