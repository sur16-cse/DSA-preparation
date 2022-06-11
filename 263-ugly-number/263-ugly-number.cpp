class Solution {
public:
    int check(int n){
       if(n==1)
           return 1;
       else if(n<1) return 0;
        else
        return (n%2==0)?check(n/2):(n%3==0)?check(n/3):(n%5==0)?check(n/5):false;
    }
    bool isUgly(int n) {
      return check(n);
    }
};