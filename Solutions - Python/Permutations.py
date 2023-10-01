

class Solution(object):
    def permute(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """

        result = []
        if len(nums) ==1:
            return [nums[:]]
        for i in range(len(nums)):
            a = nums.pop(0)
            recursive = self.permute(nums)
             #for recursive.
            for element in recursive:
                element.append(a)
            result.extend(recursive)
            nums.append(a)
        return result
        