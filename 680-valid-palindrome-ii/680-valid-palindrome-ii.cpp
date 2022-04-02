class Solution {
    bool pal(string s, int i, int j){
        while(i<j){
            if(s[i] == s[j]){
                i++;
                j--;
            }
            else
                return false;
        }
        return true;
    }
public:
    bool validPalindrome(string s) {
        int l=0,r=s.length()-1;
        bool done=false;
        while(l<r){
            if(s[l] == s[r]){
                l++;
                r--;
            }
            else
                return (pal(s,l+1,r) or pal(s,l,r-1));
        }
        return true;
    }
};