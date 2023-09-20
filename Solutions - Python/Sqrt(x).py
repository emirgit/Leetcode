"""
51ms
Beats 39.06%

16.05MB
Beats 98.22%of
"""


class Solution:
    def mySqrt(self, x: int) -> int:
        l = 0
        r = x
        while (r >= l):
            m = (r + l) // 2
            
            if (m * m <= x):
                l = m + 1
            else:
                r = m - 1
        
        return (r)