class Solution(object):
    def numberOfSteps(self, num):
        counter = 0
        while True:
            if num == 0:
                return counter
            elif num % 2 == 0:
                num = num/2
                counter +=1
            else:
                num -= 1
                counter +=1