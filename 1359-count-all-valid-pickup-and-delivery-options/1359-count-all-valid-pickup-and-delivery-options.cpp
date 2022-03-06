class Solution {
public:
    int countOrders(int n) {
        long mod=1e9+7;
        int dp[n+1];
        dp[1]=1;
        for(int i=2;i<=n;i++)
            dp[i]=((dp[i-1]%mod)*(i*(2*i-1))%mod)%mod;
        return dp[n];
    }
};