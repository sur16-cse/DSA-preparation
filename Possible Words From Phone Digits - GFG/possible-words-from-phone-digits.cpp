// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
#include <string>

using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to find list of all words possible by pressing given numbers.
    void generate(int a[],vector<string>&ans,string s,int i,int N){
        if(s.length()==N){
            ans.push_back(s);
            return;
        }
        vector<string>pad={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        for(int m=0;m<pad[a[i]].length();m++){
            generate(a,ans,s+pad[a[i]][m],i+1,N);
        }
    }
    vector<string> possibleWords(int a[], int N)
    {
        //Your code here
        vector<string>soln;
        generate(a,soln,"",0,N);
        return soln;
    }
};


// { Driver Code Starts.

int main() {
  
	int T;
	
	cin >> T; //testcases
	
	while(T--){ //while testcases exist
	   int N;
	    
	   cin >> N; //input size of array
	   
	   int a[N]; //declare the array
	   
	   for(int i =0;i<N;i++){
	       cin >> a[i]; //input the elements of array that are keys to be pressed
	   }
	   
	   Solution obj;
	   
	  vector <string> res = obj.possibleWords(a,N);
	  for (string i : res) cout << i << " ";
	   cout << endl;
	}
	
	return 0;
}  // } Driver Code Ends