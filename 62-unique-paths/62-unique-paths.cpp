class Solution {
    int f(int i, int j, int m, int n, vector<vector<int>> &dp){
        if(i>=m or j>=n)
            return 0;
        if(i == m- 1 and j == n-1)
            return 1;
        
        if(dp[i][j]!=-1)    return dp[i][j];
        
        int down = f(i+1,j,m,n,dp);
        int right = f(i,j+1,m,n,dp);
        return dp[i][j] = down + right;
    }
public:
    int uniquePaths(int m, int n) {
        //vector<vector<int>> dp(m+1,vector<int> (n+1,-1));
        //return f(0,0,m,n,dp);
        
        vector<int> dp(n, 1);
        for(int i = 1; i < m; i++)
            for(int j = 1; j < n; j++)
                dp[j] += dp[j-1];   
        return dp[n-1];
    }
};