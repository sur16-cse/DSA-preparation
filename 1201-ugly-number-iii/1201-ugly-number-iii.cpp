class Solution {
 
    long gcd(long a, long b) {
        if (a > b) {
            return gcd(b, a);
        }
        if (a == 0) {
            return b;
        } else {
            return gcd(a, b % a);
        }
    }
 
    long lcm(long a, long b) {
        return a * b / gcd(a, b);
    }
 
    public: int nthUglyNumber(int nn, int aa, int bb, int cc) {
        long a = aa;
        long b = bb;
        long c = cc;
        long n = nn;
        int o = 0;
        long low = 1;
        long high = INT_MAX;
 
        while (low < high) {
            long mid = (low + high) / 2;
            o = (int) ((mid / a) + (mid / b) + (mid / c) - (mid / lcm(a, b)) - (mid / lcm(a, c)) - (mid / lcm(b, c)) + (mid / lcm(a, lcm(b, c))));
            if (o < n) {
                low = mid + 1;
            } else {
                high = mid;
            }
        }
        return (int) low;
    }
};