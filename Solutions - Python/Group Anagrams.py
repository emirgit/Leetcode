    """
    Runtime Beats 17.46%
    Memory  Beats 36.21%
    """

class Solution:

    
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        """
        'a' is 97 in ASCII
        'z' is 122 in ASCII
        122 - 97 + 1 = 26 character

        """
        countlist = {}
        for i in strs:
            counter = [0] * (ord('z') - ord('a') + 1 )
            for char in i:
                counter[ord(char) - ord('a')] += 1
            if tuple(counter) in countlist.keys():
                countlist[tuple(counter)].append(i)
            else:
                countlist[tuple(counter)] = [i]
                
        return list(countlist.values())

            