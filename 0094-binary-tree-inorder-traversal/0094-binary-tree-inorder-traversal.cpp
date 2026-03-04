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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> num;

        if(root == nullptr) return num;

        if(root->left != nullptr){
            vector<int>izq = inorderTraversal(root->left);
            num.insert(num.end(),izq.begin(),izq.end());
        } 

        num.push_back(root->val);

        if(root->right != nullptr) {
            vector<int>der = inorderTraversal(root->right);
            num.insert(num.end(),der.begin(),der.end());
        }

        return num;
        
    }
};