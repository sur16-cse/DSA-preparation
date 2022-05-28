// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

vector<string>  spaceString(char str[]);

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        char str[10000];
        cin>>str;
        vector<string> vec = spaceString(str);
        for(string s: vec){
            cout<<s<<"$";
        }
        cout<<endl;
    }

}
// } Driver Code Ends


/*You have to complete this function*/


void recur(vector<string>&s,string st,char str[],int index,int len){
    if(index==len){
        s.push_back(st);
        return;
    }
    recur(s,st+str[index],str,index+1,len);
    if(index!=0)
    recur(s,st+" "+str[index],str,index+1,len);
}

vector<string>  spaceString(char str[])
{
 //Your code here
 int i=0,len=strlen(str);
 vector<string>s;
 string st="";
 recur(s,st,str,i,len);
 return s;
  
}

