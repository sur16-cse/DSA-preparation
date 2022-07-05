class Solution {
public:
    vector<string>valid;
    void generate(string &ans,int open,int close){
        if(open==0 && close==0){
            valid.push_back(ans);
            return;
        }
        if(open>0){
            ans.push_back('(');
            generate(ans,open-1,close);
            ans.pop_back();
        }
        if(close>0){
            if(open<close)
            {
                ans.push_back(')');
                generate(ans,open,close-1);
                ans.pop_back();
            }
        }
    }
    vector<string> generateParenthesis(int n) {
        string ans="";
        generate(ans,n,n);
        return valid;
    }
};