class Solution {
public:
    // if the result of the division of log10(x) by log10(y) is an integer without float part, it means x is a power of y. So we just apply this principle
    bool isPowerOfThree(int n) {
        if(n<1) return false;
        double sol = log10(n) / log10(3);
        return (sol == (int)sol);
    }
    
    /*
    // Iterative
    bool func(int n){
        while(n and n%3==0){
            n = n / 3;
        }
        return n==1;
    }
public:
    bool isPowerOfThree(int n) {
        if(n<1) return false;
        return func(n);
    }
    */
};