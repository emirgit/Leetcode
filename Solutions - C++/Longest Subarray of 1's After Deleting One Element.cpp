/*
Time C.
26ms Beats 98.77%
8.99 MB Beats 58.95%
*/

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i = 0, res = 0, ctr = 0, j = 0;
        int size = nums.size();

        while(i < size){
            if (nums[i] == 0)
                ctr++;
        
            while(ctr > 1){
                if(nums[j] == 0)
                    ctr--;
                j++;
            }

            res = max(res, i - j);
            i++;
        }

        return res;
    }
};