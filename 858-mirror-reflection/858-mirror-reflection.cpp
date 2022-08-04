class Solution {
    // saw from discussions:
    //      first check this: https://leetcode.com/problems/mirror-reflection/discuss/939286/Mirror-Mirror-Flip-Flip-with-Pictures-%2B-10-lines-of-code-EVERYONE-CAN-UNDERSTAND!-YOU-TOO!
    //      next check this: https://leetcode.com/problems/mirror-reflection/discuss/141773/C%2B%2BJavaPython-1-line-without-using-any-package-or
public:
    int mirrorReflection(int p, int q) {
        while (p % 2 == 0 && q % 2 == 0)
            p >>= 1, q >>= 1;
        return 1 - p % 2 + q % 2;
    }
};