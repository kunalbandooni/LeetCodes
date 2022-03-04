class Solution {
    int c(int n,int k){
        int res = 1; 
        // Since C(n, k) = C(n, n-k)
        if (k > n - k)
            k = n - k;
     
        // Calculate value of
        // [n * (n-1) *---* (n-k+1)] / [k * (k-1) *----* 1]
        for (int i = 0; i < k; ++i) {
            res *= (n - i);
            res /= (i + 1);
        }
        return res;
    }
public:
    vector<vector<int>> generate(int numRows) {
        if(numRows==1)
            return {{1}};
        vector<vector<int>> v;
        v.push_back({1});
        for(int i=1;i<numRows;i++){
            vector<int> a;
            for(int j=0;j<=i;j++){
                a.push_back(c(i,j));
            }
            v.push_back(a);
        }
        return v;
    }
};