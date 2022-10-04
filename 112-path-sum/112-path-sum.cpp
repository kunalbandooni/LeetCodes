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
    bool is_leaf(TreeNode* root){
        if(!root->left and !root->right)    return true;
        return false;
    }
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root)   return false;
        if(is_leaf(root) and targetSum == root->val)    return true;
        return hasPathSum(root->left, targetSum - root->val) or 
                    hasPathSum(root->right, targetSum - root->val);
    }
};