class Solution {
public:
    int preOrder = 0;  // Count nodes during inorder traversal

    int kthSmallest(TreeNode* root, int k) {

        // If tree is empty
        if(root == NULL) {
            return -1;
        }

        // First go to the left subtree
        if(root->left != NULL) {

            int leftAns = kthSmallest(root->left, k);

            // If answer is found in left subtree
            if(leftAns != -1) {
                return leftAns;
            }
        }

        // Count the current node
        preOrder++;

        // If current node is the kth smallest
        if(preOrder == k) {
            return root->val;
        }

        // Then go to the right subtree
        if(root->right != NULL) {

            int rightAns = kthSmallest(root->right, k);

            // If answer is found in right subtree
            if(rightAns != -1) {
                return rightAns;
            }
        }

        // Answer not found yet
        return -1;
    }
};

