class Solution {
    // https://leetcode.com/problems/reduce-array-size-to-the-half/discuss/1319470/C%2B%2B-Simple-and-Clean-Solution-Explained-Easy-to-Understand
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int, int> counter;
        priority_queue<int> q;
        int res = 0, removed = 0;
        
        for (auto a : arr) 
            counter[a]++;
        for (auto c : counter) 
            q.push(c.second);
        
        // real logic is this :D
        while (removed < arr.size() / 2) {
            removed += q.top();
            q.pop();
            res++;
        }
        
        return res;
    }
};