/*
Time C.
3ms Beats 95.24%
Space C.
9.29 MB Beats 100.00%
*/

void helper(struct TreeNode* root, int val, int depth) {
    if (root == NULL)
        return;

    if (depth - 1 == 0){
        struct TreeNode* add = (struct TreeNode *)malloc(sizeof(struct TreeNode));
        add->val = val;
        add->left = root->left;
        root->left = add;
        add->right = NULL;
        add = (struct TreeNode *)malloc(sizeof(struct TreeNode));
        add->val = val;
        add->right = root->right;
        root->right = add;
        add->left = NULL;
    }
    else {
        helper(root->left, val, depth - 1);
        helper(root->right, val, depth - 1);
    }
}

struct TreeNode* addOneRow(struct TreeNode* root, int val, int depth) {
    if (depth == 1) {
        struct TreeNode* nRoot = malloc(sizeof(struct TreeNode));
        nRoot->val = val;
        nRoot->left = root;
        nRoot->right = NULL;
        return nRoot;
    }

    helper(root, val, depth - 1);
    return root;
}