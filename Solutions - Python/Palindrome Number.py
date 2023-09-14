class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        a = str(x)
        for i in range(len(a)):
            if a[i] == a[len(a)-1-i] and i <= len(a) :
                continue
            else:
                return False
        return True 