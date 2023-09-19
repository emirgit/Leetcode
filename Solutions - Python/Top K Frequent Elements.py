class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        holder = {}

        for i in nums:
            if i in holder:
                holder[i] += 1
            else:
                holder[i] = 1
        
        return [i for i,j in sorted(holder.items(), key=lambda x:x[1], reverse = True)[:k]]