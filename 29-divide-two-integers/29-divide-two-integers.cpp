class Solution {
public:
    int divide(int dividend, int divisor) {
        int n;
        n=(long long)dividend/divisor;
         if(dividend==INT_MIN&&divisor==-1)
            return INT_MAX;
        return n;
    }
};