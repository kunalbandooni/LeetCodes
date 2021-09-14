class Solution {
public:
    int lengthOfLastWord(string s) {
        /*int i=s.length()-1;
        int len=0;
        while(s[i]==' ')
            i--;
        while(s[i]!=' ' && i>=0){
            len++;
            i--;
        }
        return len;*/
        int res=0,i=s.size()-1;
        while(s[i]==' ')
            i--;
        for(;i>=0&&s[i]!=' ';i--)
            res++;   
        return res;
    }
};