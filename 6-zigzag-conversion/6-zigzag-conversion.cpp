class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1)
            return s;

        string ans[numRows];

        int n = s.length();
        int mul = 1, j = 0;
        for(int i = 0;i<n;i++){
            if(j == numRows-1)
                mul = -1;
            if(j == 0)
                mul = 1;
            ans[j] = ans[j] + s[i];
            j = j + (mul * 1);
        }
        
        string sol="";
        for(int i=0;i<numRows;i++)
            sol = sol + ans[i];
        return sol;
    }
};