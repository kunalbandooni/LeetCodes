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
    vector<int> v;
    void inorder(TreeNode* root){
        if(root){
            v.push_back(root->val);
            inorder(root->left);
            inorder(root->right);
        }
    }
public:
    int kthSmallest(TreeNode* root, int k) {
        inorder(root);
        int i=0;
        sort(v.begin(),v.end());
        for(i=0;i<k-1;i++);
        return v[i];
    }
};