class Solution {
    // this function returns lower bound of the target to be found
    int lower_bound(vector<int>& nums, int target) {
        int l = 0, r = nums.size()-1;
        while (l <= r) {
            int mid = (r-l)/2+l;
            if (nums[mid] < target)
                l = mid+1;
            else
                r = mid-1;
        }
        return l;
    }
public:
    // So I simply called lower bound for target and target+1 (obviously)
    vector<int> searchRange(vector<int>& nums, int target) {
        int l = lower_bound(nums, target);
        int u = lower_bound(nums, target+1)-1;
        if(u<l) return {-1,-1};
        return {l,u};
    }
};