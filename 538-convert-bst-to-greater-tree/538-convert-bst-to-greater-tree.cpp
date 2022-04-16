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
    int cur_sum = 0;
    int sum = 0;
public:
    TreeNode* convertBST(TreeNode* root) {
        // shorter simpler code :)
        if (root) {
            convertBST(root->right);
            root->val += sum;
            sum = root->val;
            convertBST(root->left);
        }
        return root;
        
        /*
        Longer code
        if (!root) 
            return NULL;
        if (root->right)
            convertBST(root->right);
        root->val = (cur_sum += root->val);
        if (root->left)
            convertBST(root->left);
        return root;*/
    }
};