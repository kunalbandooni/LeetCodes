class Solution {
    int evaluate(string& s, int& i) {
        int res = 0;
        bool negFlag=false;
        while(i<s.size()&&s[i]!=')') {
            if(s[i]=='+'||s[i]==' ') 
                i++;
            else if(s[i]=='-') {
                i++;
                negFlag=true;
            }
            else if(s[i]=='(') {
                i++;
                res+=negFlag?-evaluate(s,i):evaluate(s,i);
                negFlag=false;
            }
            else {
                string strNum{""};
                while (i < s.size() && isdigit(s[i])) 
                    strNum += s[i++];
                int num = stoi(strNum);
                res+=negFlag?-num:num;
                negFlag=false;
            }
        }
        i++; // skip the current ')'
        return res;
    }
public:
    int calculate(string s) {
        int pos=0;
        return evaluate(s,pos);
    }
};