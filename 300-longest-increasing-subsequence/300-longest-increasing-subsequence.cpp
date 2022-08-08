class Solution {
    /*int dp[2501][2501];
    int f(int i, int prev, vector<int> a){
        if(i < 0)
            return 0;
        
        if(prev!=-1 and dp[i][prev]!=-1) return dp[i][prev];
        
        int notTake = f(i-1, prev, a);
        
        int take = 0;
        if(prev == -1 or a[prev] > a[i])
            take = 1 + f(i-1, i, a);
        
        if(prev!=-1)
            dp[i][prev] = max(take,notTake);
        
        return max(take, notTake);
    }*/
public:
    int lengthOfLIS(vector<int>& nums) {
        //memset(dp, -1, sizeof(dp));
        
        int n = nums.size();
        //return f(n-1, -1, nums);

        vector<int> temp;
        temp.push_back(nums[0]);
        for(int i=1;i<n;i++){
            if(nums[i] > temp.back())
                temp.push_back(nums[i]);
            else{
                auto index = lower_bound(temp.begin(), temp.end(), nums[i]);
                *index = nums[i];
            }
        }
        
        return temp.size();
    }
};