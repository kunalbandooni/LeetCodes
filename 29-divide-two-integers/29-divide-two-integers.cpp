class Solution {
public:
    int divide(int dividend, int divisor) {
        if(divisor == 1)
        return dividend;
    if(dividend == INT_MIN && abs(divisor) == 1)
        return INT_MAX;
        long long int z=int(dividend/divisor);
        if(z>pow(2,31)-1)
            return pow(2,31)-1;
        if(z<-pow(2,31))
            return -pow(2,31);
        return z;
    }
};