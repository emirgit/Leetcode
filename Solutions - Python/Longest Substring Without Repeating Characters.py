class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        if len(s) > 50000 or len(s) < 0:
            raise ValueError
        
        #sliding window method
        set1 = set()
        lpoint = 0
        maxcount = 0
        for rpoint in range(len(s)):
            while s[rpoint] in set1:
                set1.remove(s[lpoint])
                lpoint += 1
            set1.add(s[rpoint])
            maxcount = max(maxcount,rpoint-lpoint+1)
        return maxcount
        