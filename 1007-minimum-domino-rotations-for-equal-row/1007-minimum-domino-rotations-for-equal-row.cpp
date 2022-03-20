class Solution {
    //Best Solution so far:-  https://leetcode.com/problems/minimum-domino-rotations-for-equal-row/discuss/252242/JavaC%2B%2BPython-Different-Ideas
public:
    int minDominoRotations(vector<int>& A, vector<int>& B) {
        vector<int> countA(7), countB(7), same(7);
        int n = A.size();
        for (int i = 0; i < n; ++i) {
            countA[A[i]]++;
            countB[B[i]]++;
            if (A[i] == B[i])
                same[A[i]]++;
        }
        for (int i  = 1; i < 7; ++i)
            if (countA[i] + countB[i] - same[i] == n)
                return ( n - max(countA[i], countB[i]) );
        return -1;
    }
};