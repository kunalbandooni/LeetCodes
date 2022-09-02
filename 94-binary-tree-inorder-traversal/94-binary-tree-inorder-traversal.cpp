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
        if(!root)
            return;
        inorder(root->left);
        v.push_back(root->val);
        inorder(root->right);
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        // Recursive is correct, now do for iterative
        //inorder(root);
        
        if(!root)   return v;
        
        stack<TreeNode*> st;
        TreeNode* temp = root;
        while(true){
            if(temp){
                st.push(temp);
                temp = temp->left;
            }
            else{
                if(st.empty()) break;
                temp = st.top();
                st.pop();
                v.push_back(temp->val);
                temp = temp->right;
            }
        }
        
        return v;
    }
};