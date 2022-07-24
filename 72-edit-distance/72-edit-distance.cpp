class Solution {
    int dp[501][501];
    int f(int i, int j, string s, string t){
        if(i<0) return j+1;
        if(j<0) return i+1;
        
        if(dp[i][j]!=-1)    return dp[i][j];
        
        if(s[i] == t[j])
            return f(i-1,j-1,s,t);
        return dp[i][j] = min(1+f(i-1,j,s,t), 1 + min(f(i,j-1,s,t),f(i-1,j-1,s,t)));
    }
public:
    int minDistance(string word1, string word2) {
        memset(dp, -1, sizeof(dp));
        return f(word1.length()-1,word2.length()-1,word1,word2);
    }
};