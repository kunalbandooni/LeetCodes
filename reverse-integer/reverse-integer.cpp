class Solution {
public:
    int reverse(int x) {
        long sum = 0;
        int min = -pow(2,31);
        int max = pow(2,31) - 1;
        while (x !=0){
            sum = sum*10 + x%10;
            x = x/10;
        }
        if(sum > min && sum < max)
            return sum;
        else
            return 0;
    }
};