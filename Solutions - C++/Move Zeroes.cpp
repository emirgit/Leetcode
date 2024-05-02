/*
Time C.
11ms Beats 91.08%
Space C.
21.52 MB Beats 73.33%
*/

class Solution {
private:
    void swap(int& a, int& b){
        int temp = a;
        a = b;
        b = temp;
    }

public:

    void moveZeroes(vector<int>& nums) {
        int r, l, size;
        size = nums.size();
        l = 0;

        for(r = 0; r < size; r++){
            if (nums[r] != 0){
                swap(nums[r], nums[l]);
                l++;
            }
        }
    }
};