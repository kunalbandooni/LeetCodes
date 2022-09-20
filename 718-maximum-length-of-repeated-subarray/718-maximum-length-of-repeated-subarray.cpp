class Solution {
    vector<vector<int>> dp;
    int ans = 0;
    int func(int i, int j, vector<int> &a, vector<int> &b){
        if(i == a.size() or j == b.size())
            return 0;
        
        if(dp[i][j] != -1)  return dp[i][j];
        
        func(i+1, j, a, b);
        func(i, j+1, a, b);

        int pick = 0;
        if(a[i] == b[j])
            dp[i][j] =  1 + func(i+1, j+1, a, b);
        else
            dp[i][j] = 0;
                
        ans = max(ans, dp[i][j]);
        
        return dp[i][j];
    }
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        /*
        // Memoization
        dp.resize(size(nums1), vector<int>(size(nums2), -1));
        func(0, 0, nums1, nums2);
        return ans;
        */
        
        // Space optimized Tabulation...
        int m = nums1.size(), n = nums2.size();
        if (m < n) return findLength(nums2, nums1); 
        // Make sure len(nums1) > len(nums2) to optimize space
        
        vector<int> dp(n+1), prevDP(n+1);
        int ans = 0;
        for (int i = 1; i <= m; ++i) {
            for (int j = 1; j <= n; ++j) {
                
                if (nums1[i-1] == nums2[j-1])
                    dp[j] = prevDP[j-1] + 1;
                else 
                    dp[j] = 0;
                
                ans = max(ans, dp[j]);
            }
            dp.swap(prevDP);
        }
        return ans;
    }
};