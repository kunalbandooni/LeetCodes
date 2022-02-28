class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int start,end,size=nums.size();   
        vector<string> v;
        start=0;
        while(start<size){
            end=start+1;
            while(end<size && nums[end] == nums[end-1]+1)
                end++;
            string s="";
            if(end == start+1)
                s = to_string(nums[start]);
            else
                s = to_string(nums[start]) + "->" + to_string(nums[end-1]);
            
            v.push_back(s);
            start=end;
        }
        return v;
    }
};