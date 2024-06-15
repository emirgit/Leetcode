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

/*
class Solution {
private:
    void helperDFS(TreeNode* root, int& max, int curDepth){
        if(root->left == nullptr && root->right == nullptr){
            if(curDepth > max)
                max = curDepth;
            return;
        }

        if(root->left != nullptr)
            helperDFS(root->left, max, curDepth + 1);
        if(root->right != nullptr)
            helperDFS(root->right, max, curDepth + 1);
    }

public:
    int maxDepth(TreeNode* root) {
        int max = 0;
        if(root == nullptr)
            return max;
        
        helperDFS(root, max, 1);

        return max;
    }
};*/

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == nullptr)
            return 0;

        return max(maxDepth(root->right), maxDepth(root->left)) + 1;
    }
};