class Solution(object):
    def maximumWealth(self, accounts):
        """
        :type accounts: List[List[int]]
        :rtype: int
        """

        return sorted([sum(x) for x in accounts], reverse=True)[0]