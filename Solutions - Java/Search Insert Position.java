/*
Binary Search Algorithm

Time C.
0ms Beats 100.00%
Space C.
43.32 MB Beats 8.42%
*/


class Solution {
    public int searchInsert(int[] nums, int target) {
        int r, l, mid;

        l = 0;
        r = nums.length - 1;
        while(l <= r){
            mid = l + (r - l) / 2;

            if(nums[mid] < target)
                l = mid + 1;
            else if (nums[mid] > target)
                r = mid - 1;
            else
                return mid;
        }

        return l;
    }
}