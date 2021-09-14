class Solution {
public:
    int lengthOfLastWord(string s) {
        int i=s.length()-1;
        int res=0;
        while(s[i]==' ')
            i--;
        for(;i>=0&&s[i]!=' ';i--)
            res++;   
        return res;
    }
};