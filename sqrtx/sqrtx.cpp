class Solution {
public:
    int mySqrt(int x) {
        if(x == 0)
            return 0;
        long l=1,r=x,m,a;
        while(l<=r){
            m=(l+r)/2;
            if(m*m <= x){
                a = m;
                l = m+1;
            }
            else
                r = m-1;
        }
        return a;
    }
};