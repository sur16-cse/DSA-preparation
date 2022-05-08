class Solution {
public:
            bool allCharactersSame(string s)
        {
            return (s.find_first_not_of(s[0]) == string::npos);
        }
 
    string largestGoodInteger(string num) {
        vector<string>ans;
        for(int i=0;i<num.length()-1;i++){
            if(num[i]==num[i+1])
            {
                string res=num.substr(i,3);
                cout<<res<<" ";
                if(allCharactersSame(res) && res.size()==3){
                    ans.push_back(res);
                }
            }
        }
        
       if(ans.size()>0){
        sort(ans.begin(),ans.end(),greater<string>());
            string find=ans[0];
            return find;
        }
        else
        return "";
    }
};