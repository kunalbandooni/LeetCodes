/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;
        if(!root)   return ans;
        
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            int t = q.size();
            vector<int> v;
            while(t--){
                Node* temp = q.front();
                q.pop();
                v.push_back(temp->val);
                for (Node* child : temp->children) {
                    q.push(child);
                }
            }
            ans.push_back(v);
        }
        
        return ans;
    }
};