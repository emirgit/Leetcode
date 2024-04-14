/*
Time C.
0ms Beats 100.00%
Space C.
6.06 MB Beats 94.25%
*/


int sumOfLeftLeaves(struct TreeNode* root) {
    if(root == NULL)
        return 0;

    int res;

    if (root->left != NULL && root->left->left == NULL && root->left->right == NULL)
        res = root->left->val;
    else
        res = 0;

    res += sumOfLeftLeaves(root->left);
    res += sumOfLeftLeaves(root->right);


    return res;
}