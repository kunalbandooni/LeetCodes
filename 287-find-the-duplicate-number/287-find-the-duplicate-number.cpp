class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        map<int,int> m;
        for(int i=0;i<n;i++){
            m[nums[i]]++;
            if(m[nums[i]]>1)
                return nums[i];
        }
        
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