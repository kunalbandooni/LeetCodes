class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
            return false;
        long t=x,sum=0;
        while(t!=0){
            sum = (sum*10) + (t%10);
            t=t/10;
        }
        if(sum == x)
            return true;
        else return false;
    }
};