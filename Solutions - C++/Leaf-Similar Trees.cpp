/*
Time C.
0ms Beats 100.00%
Space C.
14.55 MB Beats 15.04%
*/

class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> lvs1, lvs2;
        dfs(root1, lvs1);
        dfs(root2, lvs2);
        if(lvs1.size() != lvs2.size())
            return false;
        for(int i = 0; i < lvs1.size(); i++){
            if(lvs1[i] != lvs2[i])
                return false;
        }

        return true;
    }

private:
    void dfs(TreeNode* root, vector<int>& lvs){
        if (root == nullptr)
            return;

        dfs(root->left, lvs);
        dfs(root->right, lvs);
        if(root->left == nullptr && root->right == nullptr)
            lvs.push_back(root->val);
        
    }
};