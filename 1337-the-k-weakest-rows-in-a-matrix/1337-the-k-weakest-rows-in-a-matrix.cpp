class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        // Nice one :- https://leetcode.com/problems/the-k-weakest-rows-in-a-matrix/discuss/1201679/C%2B%2B-Python3-No-Heap-No-BS-Simple-Sort-99.20
        int n=mat[0].size();
        for(int i=0; i<mat.size(); i++){
            mat[i].push_back(i);
        }
        sort(mat.begin(), mat.end());
        vector<int> ans(k);
        for(int i=0; i<k; i++){
            ans[i]=mat[i][n];            
        }
        return ans;
        /*
        // MIN HEAP, Push all and then pop k times to get minimum.
        // while pushing keep checking the index to sort accoring to given condition
        priority_queue<pair<int,int>, vector<pair<int,int>>,greater<int>> q;
        for(int i=0;i<mat.size();i++){
            int c=0;
            for(int j=0;j<mat[i].size();j++)
                if(mat[i][j])
                    c++;
            q.push(make_pair(c,i));
        }
        vector<int> v;
        for(int i=0;i<k;i++){
            auto j=q.top();
            v.push_back(j.second);
            q.pop();
        }
        return v;*/
    }
};