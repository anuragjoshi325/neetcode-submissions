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

    // Find the position of a value in inorder
    int search(vector<int>& inorder, int left, int right, int val) {
        for(int i = left; i <= right; i++) {
            if(inorder[i] == val) {
                return i;
            }
        }

        return -1;
    }

    TreeNode* helper(vector<int>& preorder, vector<int>& inorder,
                     int& preIdx, int left, int right) {

        // No elements
        if(left > right) {
            return NULL;
        }

        // Create root using preorder
        TreeNode* root = new TreeNode(preorder[preIdx]);

        // Move to next preorder element
        preIdx++;

        // Find root position in inorder
        int inIdx = search(inorder, left, right, root->val);

        // Build left subtree
        root->left = helper(preorder, inorder, preIdx,
                            left, inIdx - 1);

        // Build right subtree
        root->right = helper(preorder, inorder, preIdx,
                             inIdx + 1, right);

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {

        int preIdx = 0;

        return helper(preorder, inorder, preIdx,
                      0, inorder.size() - 1);
    }
};