class TreeAncestor {
    vector<vector<int>>par;
    public:
    TreeAncestor(int n, vector<int>& parent) {
        par.resize(n,vector<int>(20,-1));
        for(int i=0;i<n;i++) par[i][0] = parent[i];
        for(int j=1;j<20;j++)
            for(int i=0;i<n;i++) 
            {
                if(par[i][j-1]>=0)
                par[i][j] = par[par[i][j-1]][j-1];
            }
    }
    
    int getKthAncestor(int node, int k) {
        for(int j=20;j>=0;j--)
        if(k & (1<<j))
        {
             node = par[node][j];
            if(node==-1) return -1;
        }
        return node;
    }
};

/**
 * Your TreeAncestor object will be instantiated and called as such:
 * TreeAncestor* obj = new TreeAncestor(n, parent);
 * int param_1 = obj->getKthAncestor(node,k);
 */