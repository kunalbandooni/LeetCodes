class Solution {
public:
    int calPoints(vector<string>& ops) {
        // Create a stack for doing operations
        //  as all the operations are done in 
        //  last or second last elements
        stack<int> s;
        
        // traversing the array
        for(int i=0;i<ops.size();i++){
            
            // if encountered "C", pop last element
            if(ops[i] == "C")
                s.pop();
            
            // if encountered "D", push 2*last_element
            else if(ops[i] == "D")
                s.push(2 * s.top());
            
            // if encountered "+", push sum of
            //      last and second last element
            else if(ops[i] == "+"){
                int x = s.top();
                s.pop();
                int y = s.top();
                s.push(x);
                s.push(x + y);
            }
            
            //  if anything else (which is a number)
            //      is encountered, then convert 
            //      to integer and push :)
            else{
                int z = stoi(ops[i]);
                s.push(z);
            }
        }
        
        int res = 0;
        
        // Sum of all the elements
        while(!s.empty()){
            res += s.top();
            s.pop();
        }
        
        // return :D
        return res;
    }
};