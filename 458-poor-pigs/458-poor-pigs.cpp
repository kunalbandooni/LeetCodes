class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        double x = log(buckets);
        double y = log(minutesToTest / minutesToDie + 1);
        return (int)ceil(x/y);
    }
};