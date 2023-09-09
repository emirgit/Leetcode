class Solution(object):
    def canConstruct(self,ransomNote, magazine):
        """
        :type ransomNote: str
        :type magazine: str
        :rtype: bool
        """
        randict = {}
        magazin = {}
        for i in magazine:
            if i in magazin:
                magazin[i] += 1
            else:
                magazin[i] = 1
        for i in ransomNote:
            if i in randict:
                randict[i] += 1
            else:
                randict[i] = 1
        for i,j in randict.items():

            if  i in magazin.keys():
                if j <= magazin[i]:
                    continue
                else:
                    return False
            else:
                return False
        return True