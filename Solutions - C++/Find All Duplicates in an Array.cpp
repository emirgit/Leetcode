/*
Time C.
32ms Beats 92.40%
Space C.
35.90 MB Beats 90.94%
*/

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> res;
        int numsSize = nums.size();
        int index;

        for (int i = 0; i < numsSize; i++) {
            index = abs(nums[i]) - 1;
            if (nums[index] < 0)
                res.push_back(index + 1);
            else
                nums[index] = -nums[index]; 
        }
        return res;

    }
};