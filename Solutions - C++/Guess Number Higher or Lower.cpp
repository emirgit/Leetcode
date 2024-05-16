/*
Time C.
0ms Beats 100.00%
Space C.
7.28 MB Beats 59.08%
*/

class Solution {
public:
    int guessNumber(int n) {
        int start = 1;
        int res;
        while(start <= n){
            int mid = start + (n-start) / 2;
            if(guess(mid) == -1){
                n = mid;
            }
            else if(guess(mid) == 1){
                start = mid+1;
            }
            else{
                return mid;
            }
        }

        return res;
    }
};