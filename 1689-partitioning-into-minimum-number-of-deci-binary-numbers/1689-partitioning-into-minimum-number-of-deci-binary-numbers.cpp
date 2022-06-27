class Solution {
    // https://leetcode.com/problems/partitioning-into-minimum-number-of-deci-binary-numbers/discuss/970318/JavaC%2B%2BPython-Just-return-max-digit
public:
    int minPartitions(string n) {
        return *max_element(begin(n), end(n)) - '0';
    }
};