/*
I recognized that I can solve the question by using Dynamic Programming
,after my first solution

Time C.
0ms Beats 100.00%
Space C.
40.05 MB Beats 71.68%
*/

class Solution {
    public int climbStairs(int n) {
        if (n == 1)
            return 1;
        if (n == 2)
            return 2;

        int[] dp = new int[n + 1];
        dp[1] = 1;
        dp[2] = 2;

        for (int i = 3; i <= n; i++) {
            dp[i] = dp[i - 1] + dp[i - 2];
        }

        return dp[n];
    }
}

/*
The First algorithm came my mind.

Time C.
0ms Beats 100.00%
Space C.
40.23 MB Beats 40.45%


class Solution {
    private int rep_permutation(int step1, int step2) {
        long res = 1;

        for (int i = 1; i <= step2; i++) {
            res = res * (step1 + i) / i;
        }

        return (int) res;
    }

    public int climbStairs(int n) {
        int step2 = 0;
        int res = 0;

        for (int step1 = n; step1 >= 0; step1 -= 2) {
            res += rep_permutation(step1, step2);
            step2++;
        }

        return res;
    }
}

*/