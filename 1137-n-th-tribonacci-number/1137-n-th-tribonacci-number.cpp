class Solution {
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