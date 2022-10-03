class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n = colors.length();
        int count = 0;
        
        for(int i = 0; i < n; i++){
            priority_queue<int> pq;//, vector<int>, greater<int> > pq;
            char ch = colors[i];
            while(i<n and colors[i] == ch){
                pq.push(neededTime[i]);
                i++;
            }
            pq.pop();
            while(!pq.empty()){
                count += pq.top();
                pq.pop();
            }
            i--;
        }
        
        return count;
    }
};