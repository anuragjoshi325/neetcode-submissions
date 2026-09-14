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
    int ans = 0;   // stores the maximum diameter

    int height(TreeNode* root) {
        // If tree is empty
        if (root == NULL) {
            return 0;
        }

        // Find height of left subtree
        int leftHT = height(root->left);

        // Find height of right subtree
        int rightHT = height(root->right);

        // Diameter passing through current node
        ans = max(ans, leftHT + rightHT);

        // Return height of current node
        return max(leftHT, rightHT) + 1;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        height(root);

        return ans;
    }
};