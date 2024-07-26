/*  
Time C.
0ms Beats 100.00%
Space C.
43.34 MB Beats 19.87%
*/

class Solution {
    private TreeNode helper(int[] nums, int r, int l){
        if(l > r)
            return null;
        // calculate the middle point 
        int curHead = l + (r - l) / 2;
        TreeNode node = new TreeNode(nums[curHead]);
        node.left = helper(nums, curHead - 1, l);
        node.right = helper(nums, r, curHead + 1);
        return node;
    }

    public TreeNode sortedArrayToBST(int[] nums) {
        return helper(nums, nums.length - 1, 0);
    }
}