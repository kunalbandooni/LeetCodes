class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> st;
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
        return true;
    }
};