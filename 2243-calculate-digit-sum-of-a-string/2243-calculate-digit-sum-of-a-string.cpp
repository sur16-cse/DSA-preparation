#include <bits/stdc++.h>
class Solution {
public:
    string digitSum(string s, int k) {
        if(s.size()<=k)
            return s;
        int n = s.size();
        int j=0;
        string res = "";
        vector<string> result;
        while(j<n){
            res += s[j];
            if(res.size() == k){
                result.push_back(res);
                res = "";
            }
            
            j++;
        }
        if(res.size()!=0)
             result.push_back(res);
        
        string b="";
        for(auto i:result){
            //long long int a=stoll(result[i]);
             int sum=0;
            for(char ch:i){
                sum += ch - '0';
            }
             b+=to_string(sum); 
        }
        
        if(b.length()>=k)
            return digitSum(b,k);
        else
            return b;
    }
};