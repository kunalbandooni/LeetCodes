class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi = 0;
        int i = 0;
        while(i<nums.size()){
            int count = 0;
            
            while(i<nums.size() and nums[i] == 1)
                count++,i++;
            
            maxi = max(count, maxi);
            i++;
        }
        return maxi;
    }
};