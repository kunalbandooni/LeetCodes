/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
    TreeNode *f(TreeNode* root, TreeNode* p, TreeNode* q){
        if(!root)
            return NULL;
        int data = root->val;
        if(data > p->val and data > q->val)
            return f(root->left, p, q);
        if(data < p->val and data < q->val)
            return f(root->right, p, q);
        return root;
    }
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return f(root, p, q);
    }
};