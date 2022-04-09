class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        for(int i=0; i<nums.size(); i++)
            m[nums[i]]++;
        
        vector<int> v;
        priority_queue<pair<int,int>> q;
        for(auto i:m){
            q.push(make_pair(i.second,i.first));
            if(q.size() > m.size() - k){
                v.push_back(q.top().second);
                q.pop();
            }
        }
        
        return v;
    }
};