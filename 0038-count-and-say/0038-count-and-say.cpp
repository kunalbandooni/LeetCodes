class Solution {
    // EXPLANATION OP: https://leetcode.com/problems/count-and-say/discuss/2716207/C%2B%2B-oror-EASY-oror-DETAILED-EXPLAINATION-oror-OPTIMIZED
public:
    string countAndSay(int n) {
        if(n == 1)  return "1";
        if(n == 2)  return "11";
        
        int count = 1;
        string ans = "", x = countAndSay(n-1);
        
        for(int i = 0;i<x.size();i++){
            if(x[i] == x[i+1])
                count++;
            else{
                ans+=to_string(count);
                ans+=x[i];
                count = 1;
            }
        }
        
        return ans;
    }
};