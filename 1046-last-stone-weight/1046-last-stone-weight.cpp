class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        if(stones.size() == 0)
            return 0;
        if(stones.size() == 1)
            return stones[0];
        
        priority_queue<int> q;
        for(int i=0;i<stones.size();i++)
            q.push(stones[i]);
        
        while(q.size() >= 2){
            int b=q.top();
            q.pop();
            int a=q.top();
            q.pop();
            if(b-a == 0 and q.size()==0)
                return 0;
            if(b-a == 0)
                continue;
            q.push(b-a);
        }
        return q.top();
    }
};