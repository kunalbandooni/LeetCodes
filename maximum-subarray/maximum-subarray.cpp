class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curSum = 0, maxsum = INT_MIN;
        for(int i=0;i<nums.size();i++){
            curSum += nums[i];
            maxsum = max(maxsum, curSum);
            if(curSum < 0) 
                curSum = 0;
        }
        return maxsum;
    }
};