class Solution {
public:
   int lengthOfLongestSubstring(string s) {
        if(s.size() <= 1){
            return s.size();
        }
        int start = 0 ;
        unordered_map<char , int> index;
        index[s[0]] =start+1;
        int res = 1;
        for(int end = 1; end <s.size() ; end++ ){

            char current = s[end];
            if(index.find(current )!= index.end()  && index[current] >= start){

                start = index[current];  
                
            }
            index[current] = end +1 ;
            res = max(res, end -start +1 );
        }
        return res;
    }
};