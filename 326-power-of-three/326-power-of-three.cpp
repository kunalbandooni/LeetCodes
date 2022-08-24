class Solution {
    bool func(int n){
        while(n and n%3==0){
            n = n / 3;
        }
        return n==1;
    }
public:
    bool isPowerOfThree(int n) {
        if(n<1) return false;
        return func(n);
    }
};