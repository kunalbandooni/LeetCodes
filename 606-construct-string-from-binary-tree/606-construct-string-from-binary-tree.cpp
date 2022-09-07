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
    void func(TreeNode* root, string &s){
        if(!root)   return;
        s = s + '(' + (char)(root->val + '0');
        if(root->left){
            func(root->left, s);
        }
        if(root->right and !root->left){
            s = s + "()";
            func(root->right, s);
        }
        else if(root->right){
            func(root->right, s);
        }
        
        s = s + ')';
    }
public:
    string tree2str(TreeNode* root) {
        string ans = to_string(root->val);
		
        if (root->left) //left side check
			ans += "(" + tree2str(root->left) + ")";
		
        if (root->right) { //right side check
			
            if (!root->left) ans += "()"; 
            //left side not present, but right side present
			
            ans += "(" + tree2str(root->right) + ")"; 
		}
		return ans;
    }
};