class Solution {
public:
    int a[31];
    int fib(int n) {
        if(n==0 || n==1)
            return n;
        if(a[n]!=0){
            return a[n];
        }
        a[n]=fib(n-1)+fib(n-2);
        return a[n];
        
    }
};