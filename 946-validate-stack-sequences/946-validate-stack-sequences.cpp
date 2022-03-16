class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
            // TC:- 0(n) SC:- O(1) 
            int i = 0, j = 0;
            for(int x :  pushed){
                pushed[i++] = x;
                // check that current pushed element matches with popped sequence
                while(i> 0 && pushed[i-1] == popped[j]){
                    --i;
                    ++j;
                }
            }
            // as pushed is a permutation of stack so at end it should be empty
            return i == 0;
        
        // TC:- O(n) SC:- O(n)
        
        /*stack<int> st;
        int k=0;
        for(int i=0;i<pushed.size();i++){
            st.push(pushed[i]);
            while(!st.empty() and st.top()==popped[k]){
                st.pop();
                k++;
            }
        }
        if(!st.empty())
            return false;
        return true;*/
    }
};