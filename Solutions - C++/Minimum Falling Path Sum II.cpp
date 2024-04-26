/*
Time C.
0ms Beats 100.00%
Space C.
7.59 MB Beats 79.84%
*/

class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& grid) {
        int size = grid.size();
        int res = 100 * size;
        vector<vector<int>> dp(size , vector<int>(size, -1));

        //filling the dp with the column
        for(int i = 0; i < size; i++) {
            dp[0][i] = grid[0][i];
        }

        for(int i = 1; i < size; i++) {
            for(int j = 0; j < size; j++) {
                int temp = INT_MAX;

                for(int k = 0; k < size; k++) {
                    if(k != j)
                        temp = min(temp, grid[i][j] + dp[i - 1][k]);

                    dp[i][j] = temp;
                }
            }
        }

        for(int i = 0; i < size; i++) {
            res = min(res, dp[size - 1][i]);
        }

        return res;
    }
};