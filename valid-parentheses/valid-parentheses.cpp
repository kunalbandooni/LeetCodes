class Solution {
public:
    bool isValid(string s) {
        if(s.size() == 0)
            return false;
        stack<char> a;
        for(int i=0;i<s.length();i++){
            if((a.empty()) || (s[i] == '(' ) || (s[i] == '{' ) || (s[i] == '[' ))
                a.push(s[i]);
            else{
                if(( s[i] == ')' && a.top()!='(' ) || ( s[i] == ']' && a.top()!='[' ) || ( s[i] == '}' && a.top()!='{' ))
                    return false;
                else
                    a.pop();
            }
        }
        if(a.empty())
            return true;
        return false;
    }
};