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
    vector<int> res;//important

    vector<int> inorderTraversal(TreeNode* root) {

        // Call the inorder function
        inorder(root);

        return res;
    }

private:
    void inorder(TreeNode* node) {

        // If node is empty, stop
        if (node == NULL) {
            return;
        }

        // Visit left subtree
        inorder(node->left);

        // Store root value
        res.push_back(node->val);

        // Visit right subtree
        inorder(node->right);
    }
};
