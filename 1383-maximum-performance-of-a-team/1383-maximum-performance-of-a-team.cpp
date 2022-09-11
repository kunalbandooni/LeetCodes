class Solution {
    int mod = 1e9+7;
    /*
    // TAKES LIKE... FOREVER
    int func(int i, int k, vector<int>& speed, vector<int>& efficiency, int sum, int mini){
        if(k == 0)
            return mini%mod * sum%mod;
        if(i == speed.size())   return mini%mod * sum%mod;
        
        int not_pick = func(i+1, k, speed, efficiency, sum, mini);
        int pick = func(i+1, k-1, speed, efficiency, (sum+speed[i])%mod, min(mini, efficiency[i])%mod);
        
        return max(pick, not_pick)%mod;
    }*/
public:
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        // return func(0, k, speed, efficiency, 0, INT_MAX);
        
        // Saw this: https://www.youtube.com/watch?v=Y7UTvogADH0
        // and got the optimised solution
        vector<pair<int, int>> ess(n);
        for (int i = 0; i < n; ++i)
            ess[i] = {efficiency[i], speed[i]};
        sort(rbegin(ess), rend(ess));
        long sumS = 0, res = 0;
        priority_queue <int, vector<int>, greater<int>> pq; //min heap
        for(auto& [e, s]: ess){
            pq.emplace(s);
            sumS += s;
            if (pq.size() > k) {
                sumS -= pq.top();
                pq.pop();
            }
            res = max(res, sumS * e);
        }
        return res % (int)(1e9+7);
    }
};