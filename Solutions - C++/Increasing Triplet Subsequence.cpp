/*
Time C.
73ms Beats 91.42%
Space C.
114.05 MB Beats 92.38%
*/

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        if(nums.size() < 3)
            return false;

        int i = INT_MAX;
        int j = INT_MAX;

        for(int k = 0; k < nums.size(); k++) {
            if(i >= nums[k])
                i = nums[k];
            else if (j >= nums[k])
                j = nums[k];
            else
                return true;
        }


        return false;
    }
};