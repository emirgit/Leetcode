/*
Time C.
61ms Beats 90.91%
Space C.
9.28 MB Beats 95.45%
*/


int numSubarrayProductLessThanK(int* nums, int numsSize, int k) {
    int r = 0, l = 0;
    int res = 0;
    int product = 1;

    if (k <= 1)
        return 0;

    while (r < numsSize){
        product *= nums[r];

        for(l; product >= k; l++)
            product /= nums[l];

        res += 1 + (r - l);

        r++;
    }

    return res;
}