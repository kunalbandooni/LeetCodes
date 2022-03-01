class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> v;
        v.push_back(0);
        for(int i=1;i<=n;i++){
            v.push_back(v[i&i-1]+1);
        }
        return v;
    }
};