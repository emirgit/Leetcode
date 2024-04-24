/*
Time C.
0ms Beats 100.00%
Space C.
6.99 MB Beats 97.26%
*/

class Solution {
public:
    int tribonacci(int n) {
        switch(n){
            case 0:
                return 0;
            case 1:
            case 2:
                return 1; 
        }
        int res[3], i;

        for(i = 0; i < 3; i++){
            res[i] = tribonacci(i);
        }

        for(i = 3; i <= n; i++){
            int temp = res[0] + res[1] + res[2];
            res[0] = res[1];
            res[1] = res[2];
            res[2] = temp;
        }

        return res[2];
    }
};