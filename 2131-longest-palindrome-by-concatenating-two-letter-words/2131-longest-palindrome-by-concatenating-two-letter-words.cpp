class Solution {
    // Credits: https://leetcode.com/problems/longest-palindrome-by-concatenating-two-letter-words/discuss/1675343/Python3-Java-C%2B%2B-Counting-Mirror-Words-O(n)
    
    /*
    
    Explanation:

    2 letter words can be of 2 types:

    Where both letters are same
    Where both letters are different
    Based on the above information:

    If we are able to find the mirror of a word, ans += 4
    The variable unpaired is used to store the number of
        unpaired words with both letters same.
    Unpaired here means a word that has not found its mirror word.
    At the end if unpaired same letter words are > 0, 
        we can use one of them as the center of the palindromic string.
    
    */
public:
    int longestPalindrome(vector<string>& words) {
        vector<vector<int>> counter(26, vector<int>(26, 0));
        int ans = 0;
        for (string w: words) {
            int a = w[0] - 'a', b = w[1] - 'a';
            if (counter[b][a]) ans += 4, counter[b][a]--;
            else counter[a][b]++;
        }
        for (int i = 0; i < 26; i++) {
            if (counter[i][i]) {
                ans += 2;
                break;
            }
        }
        return ans;
    }
};