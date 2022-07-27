class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        long int sum = 0, temp = x;
        while(temp){
            sum = (sum*10) + (temp%10);
            temp = temp/10;
        }
        return (x == sum);
    }
};