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
    int res = 0;
    int digit[10]={0};
    bool isPal(){
        int odd = 0;
        for(int i=0;i<10;i++)
            if(digit[i]%2!=0)
                odd++;
        if(odd<2)   return true;
        return false;
    }
    void dfs(TreeNode* root){
        if(!root)   return;
        digit[root->val]++;
        if(!root->left and !root->right){
            if(isPal())
                res++;
        }
        else{
            dfs(root->left);
            dfs(root->right);
        }
        digit[root->val]--;
    }
    
public:
    int pseudoPalindromicPaths (TreeNode* root) {
        dfs(root);
        return res;
    }
};