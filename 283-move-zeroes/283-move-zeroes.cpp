class Solution {
public:
    void moveZeroes(vector<int>& a) {
        int j=0;
        for(int i=0;i<a.size();i++){
            if(a[i])
                a[j++] = a[i];
        }
        while(j<a.size())
            a[j++] = 0;
    }
};