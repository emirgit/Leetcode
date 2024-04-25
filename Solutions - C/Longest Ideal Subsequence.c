/*
Time C.
43ms Beats 100.00%
Space C.
7.13 MB Beats 100.00%
*/


#define MAX(a, b) ((a) > (b) ? (a) : (b))

int longestIdealString(char* s, int k) {
        
        int dp[26] = {0};
        int i, j, index, max = 1;

        for(i = 0; s[i] != '\0'; i++){

            index = s[i] - 'a';

            for(j = index; j >= 0 && j >= index - k; j--)
                dp[index] = MAX(dp[index], dp[j] + 1);

            for(j = index + 1; j<26 && j <= index + k; j++)
                dp[index] = MAX(dp[index], dp[j] + 1);

            max = MAX(max , dp[index]);
        }

        return max;
}