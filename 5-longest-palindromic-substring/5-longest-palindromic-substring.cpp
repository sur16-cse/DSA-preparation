class Solution {
public:
    
    int palindrome_size(string &s, int l, int r) {
        while (l >= 0 && r < s.size() && s[l] == s[r]) {
            l--;
            r++;
        }
        
        return r - l -1;
    }
    
    string longestPalindrome(string s) {   
        int best = 1;
        int pos = 0;
        
        for (int i = 0; i < s.size(); i++) {
            int size = max(palindrome_size(s, i - 1, i + 1),
                           palindrome_size(s, i - 1, i));
            
            if (size > best) {
                best = size;
                pos = i - size / 2;
            }
        }
        
        return s.substr(pos, best);
    }
};