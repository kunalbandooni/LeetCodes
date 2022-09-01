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
    int func(TreeNode* root, int maxi){
        if(!root)   return 0;
        maxi = max(root->val, maxi);
        int count = 0;
        if(root->val >= maxi) 
            count = 1;
        return (count + func(root->left, maxi) + func(root->right, maxi));
    }
public:
    int goodNodes(TreeNode* root) {
        return func(root, INT_MIN);
    }
};