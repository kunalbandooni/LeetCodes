class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        long long int totalSum=0;
        for(int i=0;i<nums.size();i++)
            totalSum+=nums[i];
        long long int leftSum=0;
        for(int i = 0; i<nums.size(); i++) {
            totalSum -= nums[i];
            if(leftSum == totalSum)
                return i;
            leftSum += nums[i];
        }
        return -1;
    }
};