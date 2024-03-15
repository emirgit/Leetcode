/*
Time C.
73ms ms Beats 95.28%
Space C.
18.49 MB Beats 91.38%
*/

int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    int *res = (int *)malloc(numsSize * sizeof(int));
    int i;

    *returnSize = numsSize;
    res[0] = 1;

    for (i = 1; i < numsSize; i++) {
        res[i] = res[i - 1] * nums[i - 1];
    }

    int left = 1;
    for (i = numsSize - 1; i >= 0; i--) {
        res[i] *= left;
        left *= nums[i];
    }
    return res;
}