class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        
        /*
        Since the numbers are [1:N], so we use the array indices for storing the
        visited state of each number, only the duplicate will be visited twice.
        For each number we goto its index position and multiply by -1. In case
        of duplicate it will be multiplied twice and the number will be +ve.
        */
        // TC: O(n)     SC:O(1)
        for(int i = 0; i < nums.size(); i++) {
            int index = abs(nums[i]) - 1;
            
            // mark as visited
            nums[index] *= -1;
            // incase of duplicate, this will become +ve 
            if(nums[index] > 0)
                return abs(nums[i]);
        }    
        
        /*
        TC:O(n)        SC: O(n)
        map<int,int> m;
        for(int i=0;i<n;i++){
            m[nums[i]]++;
            if(m[nums[i]]>1)
                return nums[i];
        }
        */
        
        /*
        TC:O(nlogn)
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++)
            if(nums[i] == nums[i+1])
                return nums[i];
        */
        
        /*
        TC: O(n^2)
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++)
                if(nums[i] == nums[j])
                    return nums[j];
        }*/
        return -1;
    }
};