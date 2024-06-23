/*
Time C.
83ms Beats 87.27%
Space C.
61.40 MB Beats 98.37%
*/

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int l = 0, r = nums.size() - 1;
        int res = 0;
        sort(nums.begin(), nums.end());

        while(r > l) {
            int sum = nums[r] + nums[l];
            if(sum < k)
                l++;
            else if(sum > k)
                r--;
            else {
                res++;
                l++;
                r--;
            }
        }

        return res;
    }
};

/*
// Brute Force was not accepted
class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int aim, res = 0;

        for(int i = 0; i < nums.size(); i++) {
            aim = k - nums[i];
            for(int j = i + 1 ; j < nums.size(); j++){
                if (nums[j] == aim){
                    nums.erase(nums.begin() + j);
                    nums.erase(nums.begin() + i);
                    i--;
                    res++;
                    break;
                }
            }
        }

        return res;
    }
};
*/
