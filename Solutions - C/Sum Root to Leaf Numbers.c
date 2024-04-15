/*
Time C.
0ms Beats 100.00%
Space C.
5.98 MB Beats 55.73%
*/

int helper(struct TreeNode* root, int val) {
    if(root == NULL)
        return 0;

    if(root->left == NULL && root->right == NULL)
        return 10*val + root->val;


    return helper(root->left, 10 * val + root->val) + helper(root->right, 10 * val + root->val);
}


int sumNumbers(struct TreeNode* root) {
    return helper(root, 0);
}