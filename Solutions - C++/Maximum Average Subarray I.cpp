/*
Time C.
109ms Beats 92.62%
Space C.
112.39 MB Beats 79.56%
*/

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double res;
        double sum = 0.0;

        for(int i = 0; i < nums.size() && i < k; i++)
            sum += nums[i];
        
        res = sum / k;
        
        for(int i = 0; i < nums.size() - k; i++){
            sum += nums[k + i] - nums[i]; 
            res = max(res, sum / k);
        }

        return res;
    }
};  