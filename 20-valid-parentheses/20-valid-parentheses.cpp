class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        if(s.length()%2==1)
            return 0;
        st.push(s[0]);
        for(int i=1;i<s.length();i++){
            if(s[i]=='(' or s[i]=='[' or s[i]=='{'){
                st.push(s[i]);
                continue;
            }
            else{
                if(st.empty())
                    return 0;
                if(st.top()=='(' and s[i]==')')
                    st.pop();
                else if(st.top()=='[' and s[i]==']')
                    st.pop();
                else if(st.top()=='{' and s[i]=='}')
                    st.pop();
                else
                    return 0;
            }
        }
        if(!st.empty())
            return 0;
        return 1;
    }
};