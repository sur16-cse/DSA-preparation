class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int count=0,count1=0;
        string ans="";
        for(int i=0;i<s.length();i++){
             if(s[i]=='(' || count>=1){
                if(s[i]=='(')
                    count++;
               else if(s[i]==')'){
                   count1++;
                   count--;
               }
            }
        }
        count=0;
        for(int i=0;i<s.length();i++){
            if(s[i]!='(' && s[i]!=')'){
                ans+=s[i];
             }
            else if(count1>0 && s[i]=='('){
                ans+=s[i];
                count++;
                count1--;
            }
            else if(count>0 && s[i]==')')
            {
                ans+=s[i];
                count--;
            }
        }
        return ans;
    }
};