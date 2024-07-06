/*
Time C.
31ms Beats 93.01%
Space C.
57.77 MB Beats 86.18%
*/

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i = 0, j = 0;
        int res = 0;

        while(i < nums.size()){
            if(nums[i] == 0)
                k--;
            while(k < 0){
                if(nums[j] == 0)
                    k++;
                j++;
            }

            i++;
            res = max(res, i - j);
        }

        return res;
    }
};