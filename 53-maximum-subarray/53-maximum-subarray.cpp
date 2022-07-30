class Solution {
    /*int solve(vector<int>& A, int i, bool mustPick, vector<vector<int>>& dp) {
        if(i >= size(A)) 
            return mustPick ? 0 : -1e5;
        
        if(dp[mustPick][i] != -1) return dp[mustPick][i];
        
        if(mustPick)
            return dp[mustPick][i] = max(0, A[i] + solve(A, i+1, true, dp));
        
        return dp[mustPick][i] = max(solve(A, i+1, false, dp), A[i] + solve(A, i+1, true, dp));
    }*/
public:
    /*int maxSubArray(vector<int>& nums) {    
        vector<vector<int>> dp(2, vector<int>(size(nums), -1));
        return solve(nums, 0, false, dp);
    }*/
    
    // KADANE'S ALGORITHM
    int maxSubArray(vector<int>& nums) {
        int curMax = 0, maxTillNow = INT_MIN;
        for(auto c : nums)
            curMax = max(c, curMax + c),
            maxTillNow = max(maxTillNow, curMax);
        return maxTillNow;
    }
};