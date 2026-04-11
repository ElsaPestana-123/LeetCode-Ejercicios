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
    TreeNode* convert(vector<int>&nums, int left, int right){
        if(left > right){
            return nullptr;
        }

        int med = left+(right-left)/2;

        TreeNode* root = new TreeNode(nums[med]);
        root->left = convert(nums, left, med-1);
        root->right = convert(nums, med+1, right);

        return root;

    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return convert(nums,0, nums.size()-1);
        
    }
};