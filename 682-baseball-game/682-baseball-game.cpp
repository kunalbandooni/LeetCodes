class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> s;
        for(int i=0;i<ops.size();i++){
            if(ops[i] == "C")
                s.pop();
            else if(ops[i] == "D")
                s.push(2 * s.top());
            else if(ops[i] == "+"){
                int x = s.top();
                s.pop();
                int y = s.top();
                s.push(x);
                s.push(x + y);
            }
            else{
                int z = stoi(ops[i]);
                s.push(z);
            }
        }
        int res = 0;
        while(!s.empty()){
            res += s.top();
            s.pop();
        }
        return res;
    }
};