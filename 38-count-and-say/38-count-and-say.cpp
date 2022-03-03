class Solution {
public:
    string countAndSay(int n) {
       //string of length 1
        if(n==1) return "1";
        //recursion
        string s=countAndSay(n-1);
        int counter=0; string res="";
        //we will solve for string 2 becoz 1 base case and 2 ans will get for 3;
        //solve for freq + number for each n
        for(int i=0;i<s.length();i++){
            //increment counter for each s[i]
            counter++;
            //check pointer points to last element or segregating groups
            if((i==s.length()-1) || (s[i]!=s[i+1])){
                res=res+to_string(counter)+s[i];
                //to check for new grp each time set counter =0
                counter=0;
            }
        }
        return res;
    }
};