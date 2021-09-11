class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle == "")
            return 0;
        int do_it = haystack.size()-needle.size()+1;
        for(int i=0;i<do_it;i++)
            if(haystack[i] == needle[0]){
                int j=0;
                for(j=0;j<needle.size();j++){
                    if(haystack[i+j]!=needle[j])
                        break;
                }
                if( j== needle.size())
                    return i;
            }
        return -1;
    }
};