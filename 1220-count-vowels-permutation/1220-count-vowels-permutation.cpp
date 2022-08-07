class Solution {
    int dp[100001][5];
    long int mod = 1e9+7;
    int f(int i, int n, int prev){
        if(i == n-1)  return 1;
        
        if(dp[i][prev]!=-1) return dp[i][prev];
        
        long int sum = 0;
        if(prev == 0)
            sum = f(i+1, n, 1);
        else if(prev == 1)
            sum = f(i+1, n, 0)%mod + f(i+1, n, 2)%mod;
        else if(prev == 2)
            sum = f(i+1, n, 0)%mod + f(i+1, n, 1)%mod + f(i+1, n, 3)%mod + f(i+1, n, 4)%mod;
        else if(prev == 3)
            sum = f(i+1, n, 2)%mod + f(i+1, n, 4)%mod;
        else
            sum = f(i+1, n, 0)%mod;
        
        return dp[i][prev] = sum%mod;
    }
public:
    int countVowelPermutation(int n) {
        memset(dp, -1, sizeof(dp));

        long int sum = 0;
        for(int i=0; i<5;i++)
            sum = (sum + f(0, n, i))%mod;
        return sum;
    }
};