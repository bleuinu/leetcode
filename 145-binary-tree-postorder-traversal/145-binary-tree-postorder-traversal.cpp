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
public:
    vector<int> postorderTraversal(TreeNode* root) {
        stack<TreeNode *> s;
        vector<int> ans;
        
        while(true) {
            while(root != nullptr) {
                s.push(root);
                s.push(root);
                root = root->left;
            }
            
            if(s.empty()) break;
            
            root = s.top();
            s.pop();
            if(!s.empty() && s.top() == root) 
                root = root->right;
            else {
                ans.push_back(root->val);
                root = nullptr;
            }
        }

        return ans;
    }
};