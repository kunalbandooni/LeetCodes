class Solution {
public:
    int findMin(vector<int>& nums) {
        int mini=nums[0];
        for(int i=1;i<nums.size();i++)
            mini=min(nums[i],mini);
        return mini;
    }
};