class Solution {
    // https://leetcode.com/problems/maximum-product-of-word-lengths/discuss/1233648/Short-and-Easy-Solution-w-Explanation-or-C%2B%2B-using-Bitset-and-Bit-masking-or-Beats-100
public:
    int maxProduct(vector<string>& words) {
        vector<int> mask(words.size());
        int result = 0;
        for (int i=0; i<words.size(); ++i) {
            for (char c : words[i])
                mask[i] |= 1 << (c - 'a');
            for (int j=0; j<i; ++j)
                if (!(mask[i] & mask[j]))
                    result = max(result, int(words[i].size() * words[j].size()));
        }
        return result;
    }
};