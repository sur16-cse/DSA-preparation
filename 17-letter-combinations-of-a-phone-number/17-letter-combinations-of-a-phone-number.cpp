class Solution {
public:
   vector<string> ans;
    int n;
    void backtrack(string start, int next, string& s, string& digits, map<char,vector<string>>& m){
        //appending the character to the string 
		s+=start;
		
		//base cases 
        if(s.length()==n || next==n){
            ans.push_back(s);
            return;
        }
        else{
		
			//for every character in next array
            for(auto j:m[digits[next]]){
                backtrack(j,next+1,s,digits,m);
        
				//backtracking
				s.pop_back();
            }
        }
    }
	
    vector<string> letterCombinations(string digits) {
		//edge case 1
		if(digits.length()==0) return ans;
        map<char,vector<string>> m;
        m['2']={"a","b","c"};
        m['3']={"d","e","f"};
        m['4']={"g","h","i"};
        m['5']={"j","k","l"};
        m['6']={"m","n","o"};
        m['7']={"p","q","r","s"};
        m['8']={"t","u","v"};
        m['9']={"w","x","y","z"};
		
		//edge case 2
        if(digits.length()==1) return m[digits[0]];
        string s="";
        n=digits.size();
		
		//initial for each
        for(auto i:m[digits[0]]){
            s="";
            backtrack(i,1,s,digits,m);
        }
        return ans;
    }
};