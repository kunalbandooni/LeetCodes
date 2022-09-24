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
    vector<vector<int>> ans;
    void func(TreeNode* root, int t, int &curr, vector<int> &ds){
        if(!root)   return;
        
        curr += root->val;
        ds.push_back(root->val);
        if(!root->left and !root->right){
            if(curr == t)
                ans.push_back(ds);
        }
        else{
            if(root->left){
                func(root->left, t, curr, ds);
                ds.pop_back();
                curr -= root->left->val;
            }
            if(root->right){
                func(root->right, t, curr, ds);
                ds.pop_back();
                curr -= root->right->val;
            }
        }
    }
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> ds;
        int c = 0;
        func(root, targetSum, c, ds);
        
        return ans;
    }
};