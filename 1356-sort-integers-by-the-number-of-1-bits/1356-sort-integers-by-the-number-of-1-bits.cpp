class Solution {
    int count_1(int n){
        int c = 0;
        
        while(n){
            c += n%2;
            n=n/2;
        }
        
        return c;
    }
    static bool func(int a, int b){
        int n=a,m=b;
        int c1 = 0;
        while(a){
            c1 += a%2;
            a=a/2;
        }
        
        int c2 = 0;
        while(b){
            c2 += b%2;
            b=b/2;
        }
        
        if(c1 == c2)
            return n < m;
        
        return c1 < c2;
        //return count_1(a) > count_1(b);
    }
public:
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), func);
        return arr;
    }
};