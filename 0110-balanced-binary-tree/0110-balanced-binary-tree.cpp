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
    int maxDepth(TreeNode* root) {
        if(root == nullptr) return 0;

        int izq = maxDepth(root->left);
        int der = maxDepth(root->right);

        return max(izq,der)+1;
    
    }

    bool isBalanced(TreeNode* root) {
        if(root == nullptr) return true;

        int def = maxDepth(root->left) - maxDepth(root->right);

        if(abs(def) > 1) return false;

        return isBalanced(root->left) && isBalanced(root->right);
    }
};