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
        dp.resize(size(nums1), vector<int>(size(nums2), -1));
        func(0, 0, nums1, nums2);
        return ans;
    }
};