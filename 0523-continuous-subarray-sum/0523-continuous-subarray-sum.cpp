class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        // [1] here, we store indicies for prefix sums (mod k);
        unordered_map<int,int> prefix_rem = {{0,-1}};
        int prefix_sum = 0;
        
        for (int i = 0; i < nums.size(); i++)
        {
            // [2] check the condition, namely, that the difference
            //     between two occurences of the same remainder is >= 2
            prefix_sum = (prefix_sum + nums[i]) % k;
            prefix_rem.insert({prefix_sum, i});
            if (i - prefix_rem[prefix_sum] >= 2) 
                return true;
        }
        return false;
    }
};