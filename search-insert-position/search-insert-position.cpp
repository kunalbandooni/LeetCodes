class Solution {
public:
    int searchInsert(vector<int>& a, int target) {
        int n=a.size();
        /*if(target < a[0])
            return 0;
        if(target > a[n-1])
            return n;*/
        int beg=0,end=n-1,mid;
        while(beg<=end){
            mid=(beg+end)/2;
            if(a[mid]==target)
                return mid;
            if(a[mid]>target)
                end=mid-1;
            else
                beg=mid+1;
        }
        return beg;
    }
};