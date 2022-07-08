class Solution {
    // https://leetcode.com/problems/fibonacci-number/discuss/218301/C%2B%2B-4-Solutions-Explained-Recursive-or-Iterative-with-DP-or-Imperative-or-Binet's
public:
    int fib(int N) {
        double phi = (sqrt(5) + 1) / 2;     
        return round(pow(phi, N) / sqrt(5));
    }
};