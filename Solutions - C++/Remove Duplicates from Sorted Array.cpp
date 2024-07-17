/*
Time C.
0ms Beats 100.00%
Space C.
21.39 MB Beats 17.24%
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i, res = 1;
        
        for(i = 1; i < nums.size(); i++){
            if(nums[i] != nums[i - 1]){
                nums[res] = nums[i];
                res++;
            }
        }

        return res;
    }
};