class Solution(object):
    def minMoves(self, target, maxDoubles):
        counter = 0
        for i in range(maxDoubles):
            if target == 1:
                break
            elif target % 2 == 1:
                target -= 1
                target = target / 2
                counter += 2
            else:
                target = target / 2
                counter += 1

        target -= 1
        counter += target
        return int(counter)