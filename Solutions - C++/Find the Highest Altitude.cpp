/*
Time C.
0ms Beats 100.00%
Space C.
9.64 MB Beats 88.39%
*/

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum = 0;
        int res = 0;

        for(int i = 0; i < gain.size(); i++){
            sum += gain[i];
            res = max(res, sum);
        }

        return res;
    }
};