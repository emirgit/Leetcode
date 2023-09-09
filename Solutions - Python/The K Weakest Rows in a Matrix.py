class Solution(object):
    def kWeakestRows(self, mat, k):
        """
        :type mat: List[List[int]]
        :type k: int
        :rtype: List[int]
        """
        weakdict = {}
        counter = 0
        for i in mat:
            solcounter = 0
            for j in i:
                if j == 1:
                    solcounter += 1
            weakdict[counter] = solcounter
            counter += 1
        a = sorted(weakdict.items(), key=lambda weakdict: weakdict[1])
        return [i for i,j in a[:k]]