class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        hashset = set(nums)

        if (len(hashset) != len(nums)):
            return 1
        else:
            return 0