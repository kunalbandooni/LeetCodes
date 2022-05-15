/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    // RECURSIVE
    /*
    
    vector<int> sums;
    int deepestLeavesSum(TreeNode* root) {
        dfs(root, 0);
        return sums.back();
    }
    void dfs(TreeNode* node, int lvl) {
        if (lvl == sums.size()) sums.push_back(node->val);
        else sums[lvl] += node->val;
        if (node->left) dfs(node->left, lvl+1);
        if (node->right) dfs(node->right, lvl+1);
    }
    
    */
    
    int deepestLeavesSum(TreeNode* root) {
        int res = 0, i;
        queue<TreeNode*> q;
        q.push(root);
        while (q.size()) {
            for (i = q.size() - 1, res = 0; i >= 0; --i) {
                TreeNode* node = q.front(); q.pop();
                res += node->val;
                if (node->right) q.push(node->right);
                if (node->left)  q.push(node->left);
            }
        }
        return res;
    }
};