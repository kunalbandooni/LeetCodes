class Solution {
    struct point_comparator {
        bool operator() (pair<double, vector<int>> const& point1, pair<double, vector<int>> const& point2) {
            return point1.first > point2.first;
        }
    };
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<double, vector<int>>, vector<pair<double, vector<int>>>, point_comparator> pq;
        
        for(auto i: points){
            pq.push({sqrt(pow(i[0],2) + pow(i[1],2)), i});
        }
        
        vector<vector<int>> res;
        
        int i = 0;
        while(i<k){
            res.push_back(pq.top().second);
            pq.pop();
            i++;
        }
        
        return res;
    }
};