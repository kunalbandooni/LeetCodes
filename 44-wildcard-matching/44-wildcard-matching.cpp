class Solution {
    /*int dp[2001][2001];
    bool f(int i, int j, string s, string p){
        if(i==0 and j==0) return true;
        if(i==0 and j>0)    return false;
        if(j==0 and i>0){
            for(int k=1;k<=i;k++)
                if(s[k] != '*')
                    return false;
            return true;
        }
        
        if(dp[i][j]!=-1)    return dp[i][j];
        
        if(s[i-1] == p[j-1] || s[i-1] == '?')
            return dp[i][j] = f(i-1,j-1,s,p);
        if(s[i-1] == '*')
            return dp[i][j] = f(i-1,j,s,p) | f(i,j-1,s,p);
        
        return dp[i][j] = false;
    }*/
public:
    bool isMatch(string s, string p) {
        int n = p.length(), m = s.length();
        //memset(dp, -1, sizeof(dp));
        //return f(n, m, p, s);
        vector<vector<bool>> dp(n+1,vector<bool> (m+1,false));
        dp[0][0] = true;
        //for(int j=1;j<=m;j++)   dp[0][j] = false;
        for(int i = 1;i<=n;i++){
            int flag = true;
            for(int k=1;k<=i;k++){
                if(p[k-1] != '*'){
                    dp[i][0] = false;
                    flag = false;
                    break;
                }
            }
            if(flag)
                dp[i][0] = true;
        }
        
        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++){
                if(p[i-1] == s[j-1] || p[i-1] == '?')
                    dp[i][j] = dp[i-1][j-1];
                else if(p[i-1] == '*')
                    dp[i][j] = dp[i-1][j] | dp[i][j-1];
                else
                    dp[i][j] = false;
            }
        
        return dp[n][m];
    }
};