/*  
Time C.
2ms Beats 84.61%
Space C.
52.34 MB Beats 40.88%


 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    private int helper(TreeNode root, int min){
        if(root == null)
            return 0;

        if(root.val >= min)
            return 1 + helper(root.left, root.val) + helper(root.right, root.val);
        else 
            return helper(root.right, min) + helper(root.left, min);


    }

    public int goodNodes(TreeNode root) {
        int min = -10000;

        return helper(root, min); 
    }
}