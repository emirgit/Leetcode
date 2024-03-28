class Solution {
    public int maxSubarrayLength(int[] nums, int k) {
        int r, res = 0, l = 0, size = nums.length;
        HashMap<Integer, Integer> hash = new HashMap<>();

        for (r = 0; r < size; r++) {

            hash.put(nums[r], hash.getOrDefault(nums[r], 0) + 1);

            while (hash.get(nums[r]) > k) {
                
                hash.put(nums[l], hash.get(nums[l]) - 1);
                l++;
            }

            res = Math.max(res, r - l + 1);
        }

        return res;
    }
}