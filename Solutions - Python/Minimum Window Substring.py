class Solution(object):
    def minWindow(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: str
        """
        t_counter = {}
        for i in t:
            if i in t_counter:
                t_counter[i] += 1
            else:
                t_counter[i] = 1
        least = len(t_counter)
        lpoint = 0
        rpoint = 0
        allinthere = 0
        frame = {}
        result = float("inf"), int, int

        while rpoint < len(s):
            frame[s[rpoint]] = frame.get(s[rpoint], 0) + 1
            if s[rpoint] in t_counter and frame[s[rpoint]] == t_counter[s[rpoint]]:
                allinthere += 1
            while lpoint <= rpoint and allinthere == least:
                if rpoint - lpoint + 1 < result[0]:
                    result = (rpoint - lpoint + 1, lpoint, rpoint)
                frame[s[lpoint]] -= 1
                if s[lpoint] in t_counter and frame[s[lpoint]] < t_counter[s[lpoint]]:
                    allinthere -= 1
                lpoint += 1
            rpoint += 1
        if result[0] == float("inf"):
            return ""
        else:
            return s[result[1]:result[2] + 1]

s = Solution()
print(s.minWindow("ADOBECODEBANC","ABC"))
            
        
            