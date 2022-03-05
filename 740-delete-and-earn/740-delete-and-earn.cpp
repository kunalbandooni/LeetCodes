class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int freq[10001]={0};
        for(int i=0;i<nums.size();i++)
            freq[nums[i]]++;
        
        int dp[10001]={0};
        dp[0]=freq[0];
        dp[1]=1*freq[1];
        for(int i=2;i<10001;i++)
            dp[i]=max(dp[i-1],dp[i-2]+i*freq[i]);
        return dp[10000];
    }
};