/*
Time C.
0ms Beats 100.00%
16.62 MB Beats 6.59%
*/

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int size = cost.size();

        // Hint dp[i] = cost[i] + min(dp[i + 1], dp[i + 2]) from n -1 to 0
        // cost[i] += min(cost[i - 1], cost[i - 2]); from 2 to size - 1
        for(int i = 2; i < size; i++)
            cost[i] += min(cost[i - 1], cost[i - 2]);

        return min(cost[size - 1], cost[size - 2]);
    }
};