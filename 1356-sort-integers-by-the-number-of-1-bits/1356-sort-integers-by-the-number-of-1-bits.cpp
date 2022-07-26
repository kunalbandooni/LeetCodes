class Solution {
    static int count_1(int n){
        int c = 0;
        
        while(n){
            c += n%2;
            n=n/2;
        }
        
        return c;
    }
    static bool func(int a, int b){
        int c1 = count_1(a);
        int c2 = count_1(b);        
        if(c1 == c2)
            return a < b;
        
        return c1 < c2;
    }
public:
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), func);
        return arr;
    }
};