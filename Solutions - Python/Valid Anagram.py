class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        """
        Runtime 49 ms Beats 83.08%
        Memory 16.88 MB Beats 59.31%
        """
        if len(s) != len(t):
            return 0

        count_S = {}
        count_T = {}

        for i in s:
            if i in count_S:
                count_S[i] += 1
            else:
                count_S[i] = 1

        for i in t:
            if i in count_T:
                count_T[i] += 1
            else:
                count_T[i] = 1
        
        if count_T == count_S:
            return 1
        else:
            return 0