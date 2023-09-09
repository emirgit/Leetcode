import re
class Solution(object):
    def romanToInt(self, s):
        roman = {"I":1,"V":5,"X":10,"L":50,"C":100,"D":500,"M":1000}
        counter = 0
        if re.search("^[IVXLCDM]{1,15}$",s):

            for i in range(len(s)):

                if i +1 < len(s) and roman[s[i]] < roman[s[i+1]]:
                    counter -= roman[s[i]]
                else:
                    counter += roman[s[i]]

        return counter