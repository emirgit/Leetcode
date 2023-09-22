"""
34ms
Beats 90.79%
16.21MB
Beats 59.93%
"""



class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        i = len(digits) - 1
        add = 1
        while (i >= 0):
            if (add and digits[i] == 9):
                digits[i] = 0
            elif(add):
                digits[i] += 1
                add = 0
                break
            i -= 1

        if (not add):
            return(digits)
        res = [0 for i in range(0, len(digits) + 1)]
        res[0] = 1
        return res