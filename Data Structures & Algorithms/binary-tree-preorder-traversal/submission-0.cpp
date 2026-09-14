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
    vector<int> res;

    vector<int> preorderTraversal(TreeNode* root) {

        // Call preorder function
        preorder(root);

        // Return the final answer
        return res;
    }

private:
    void preorder(TreeNode* node) {

        // If node is NULL, stop
        if(node == NULL) {
            return;
        }

        // Visit Root first
        res.push_back(node->val);

        // Then visit Left subtree
        preorder(node->left);

        // Then visit Right subtree
        preorder(node->right);
    }
};