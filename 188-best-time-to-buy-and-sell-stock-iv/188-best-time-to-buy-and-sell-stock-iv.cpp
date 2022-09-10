class Solution {
    int func(int i, bool buy, int k, vector<int> &prices, vector<vector<vector<int>>> &dp){
        if(k == 0)  return 0;
        if(i == prices.size())  return 0;
        
        if(dp[i][buy][k]!=-1)  return dp[i][buy][k];
        
        int profit = 0;
        if(buy)
            profit = max(-prices[i] + func(i+1, 0, k, prices, dp), 
                         0 + func(i+1, 1, k, prices, dp));
        else
            profit = max(prices[i] + func(i+1, 1, k-1, prices, dp),
                        0 + func(i+1, 0, k, prices, dp));
            
        return dp[i][buy][k] = profit;
    }
public:
    int maxProfit(int k, vector<int>& prices) {
        vector<vector<vector<int>>> dp(prices.size()+1,vector<vector<int>>(2,vector<int>(k+1,-1)));
        return func(0, 1, k, prices, dp);
    }
};