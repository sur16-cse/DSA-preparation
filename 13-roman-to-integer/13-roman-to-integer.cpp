class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>get={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int num=get[s.back()];
        for(int i=0;i<s.length()-1;i++)
            num+=get[s[i]]<get[s[i+1]]?-get[s[i]]:get[s[i]];
        return num;
    }
};