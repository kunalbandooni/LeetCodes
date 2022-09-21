class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int sum = 0;
        for(int i=0;i<nums.size();i++)
            if(nums[i]%2 == 0)
                sum += nums[i];

        vector<int> ans;
        
        for(int i=0;i<queries.size();i++){
            int a = queries[i][0];
            int b = queries[i][1];
            
            if(nums[b]%2 == 0)
                sum = sum - nums[b];
            nums[b] = nums[b] + a;
            if(nums[b]%2 == 0)
                sum = sum + nums[b];
            
            ans.push_back(sum);
        }
        
        return ans;
    }
};