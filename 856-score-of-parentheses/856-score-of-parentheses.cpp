class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> st;
        st.push(0);     // stores total score
        for(int i=0;i<s.length();i++){
            if(s[i]=='(')
                st.push(0);
            else{
                int t=st.top(); // Score of top()
                st.pop();
                if(t==0)    // no inner parenthesis - score: 1
                    t++;
                else        // score: 2 * A
                    t=t*2;
                st.top()=st.top() + t;
                // score of inner level passed
            }
        }
        return st.top();
    }
};