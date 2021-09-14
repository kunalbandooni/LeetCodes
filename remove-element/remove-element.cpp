class Solution {
public:
    int removeElement(vector<int>& a, int val) {
        int sum = 0;
        int n = a.size();
        int j=0;
        for(int i=0;i<n;i++)
            if(a[i]!=val)
                a[j++]=a[i];
        return j;
    }
};