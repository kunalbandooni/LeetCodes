class Solution {
    // another solution using math formula : https://leetcode.com/problems/n-th-tribonacci-number/discuss/348503/O(1)-Solution-using-math.
public:
    int tribonacci(int n) {
        if(n < 2)   return n;
        if(n == 2)  return 1;
        int a = 0;
        int b = 1;
        int c = 1;
        int ans;
        for(int i=3;i<=n;i++){
            ans = c + b + a;
            a = b;
            b = c;
            c = ans;
        }
        
        return ans;
    }
};