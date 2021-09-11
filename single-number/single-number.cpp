class Solution {
public:
    int singleNumber(vector<int>& n) {
        int a=0;
        for(int i=0;i<n.size();i++){
            a=a^n[i];
        }
        return a;
    }
};