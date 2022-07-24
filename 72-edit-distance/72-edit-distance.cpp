class Solution {
    //int dp[501][501];
    /*int f(int i, int j, string s, string t){
        if(i==0) return j+1;
        if(j==0) return i+1;
        
        if(dp[i][j]!=-1)    return dp[i][j];
        
        if(s[i-1] == t[j-1])
            return f(i-1,j-1,s,t);
        return dp[i][j] = min(1+f(i-1,j,s,t), 1 + min(f(i,j-1,s,t),f(i-1,j-1,s,t)));
    }*/
public:
    int minDistance(string word1, string word2) {
        //memset(dp, -1, sizeof(dp));
        //return f(word1.length()-1,word2.length()-1,word1,word2);
        int n = word1.length(), m = word2.length();
        string s = word1, t = word2;
        
        vector<int> prev(m+1,0);
        for(int j = 0;j<=m;j++) prev[j] = j;
        
        for(int i=1;i<=n;i++){
            vector<int> curr(m+1,0);
            curr[0] = i;
            for(int j=1;j<=m;j++){
                if(s[i-1] == t[j-1])
                    curr[j] =  prev[j-1];
                else
                    curr[j] = 1 + min(prev[j], min(curr[j-1],prev[j-1]));
            }
            prev = curr;
        }
        
        return prev[m];
    }
};