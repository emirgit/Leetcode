/*
Time C.
12ms Beats 87.36%
Space C.
33.78 MB Beats 99.32%
*/

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int suml = 0;
        int sumr = 0;

        for(int e : nums){
            sumr += e;
        }

        for(int i = 0; i < nums.size(); i++){
            if(suml == sumr - suml - nums[i])
                return i;
            
            suml += nums[i];
        }

        return -1;
    }
};