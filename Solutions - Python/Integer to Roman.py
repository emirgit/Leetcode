class Solution(object):
    def intToRoman(self, num):
        """
        :type num: int
        :rtype: str
        """
        basnum = []
        bas1 = ["","I","II","III","IV","V","VI","VII","VIII","IX"]
        bas2 = ["","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"]
        bas3 = ["","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"]
        while num >= 1 :
            basnum.append(num % 10)
            num = int(num /10.0)
        if len(basnum) == 1:
            basnum = [basnum[0],0,0,0]
        elif len(basnum) == 2:
            basnum = [basnum[0],basnum[1],0,0]
        elif len(basnum) == 3:
            basnum = [basnum[0],basnum[1],basnum[2],0]
        return "M"*basnum[3]+bas3[basnum[2]]+bas2[basnum[1]]+bas1[basnum[0]]
            
            