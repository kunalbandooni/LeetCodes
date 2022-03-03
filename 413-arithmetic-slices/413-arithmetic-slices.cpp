class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        const short n = nums.size();
        short diff; // current difference
        short i=0; // nums index
        short c; // counter of the length of the arithmetic subarray
        short res=0; // result
        while(i<n-1){
            diff=nums[i]-nums[i+1]; // current difference
            c=1; // restart the counter
            while(i<n-1 && nums[i]-nums[i+1]==diff){ // while we see the same difference go on
                ++c; // increase the counter
                ++i;
            }
            for(short j=1;j<=c-2;++j) res+=j; // add to the result with respect to the counter of the arithmetic subarray (Example: c=6 --> we add 1+2+3+4=10)
            if(c==1) ++i; // if c is 1 it means we did not meet the same difference, then we go on
        }  
        return res;
    }
};