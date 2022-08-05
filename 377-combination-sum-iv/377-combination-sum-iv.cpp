class Solution {
    /*int f(int target, vector<int> a, vector<int> &dp){
        if(target == 0) 
            return 1;
        if(dp[target]!=-1)  return dp[target];
        int res = 0;
        for(int i=0;i<a.size();i++)
            if(a[i] <= target){
                res += f(target - a[i], a, dp);
            }
        return dp[target] = res;
    }*/
public:
    int combinationSum4(vector<int>& nums, int target) {
        //vector<int> dp(target + 1, -1);
        //return f(target, nums, dp);
        vector<unsigned int> dp(target + 1); 
        dp[0] = 1;
	    for (int curTarget = 1; curTarget <= target; curTarget++) 
            for (auto& num : nums)     
                if (num <= curTarget)  
				    dp[curTarget] += dp[curTarget - num];   
        return dp[target];
    }
};