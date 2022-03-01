class Solution {
    int countBit(int n){
        int z=0;
        while(n){
            z+=(n%2);
            n=n/2;
        }
        return z;
    }
public:
    vector<int> countBits(int n) {
        vector<int> v;
        for(int i=0;i<=n;i++){
            v.push_back(countBit(i));
        }
        return v;
    }
};