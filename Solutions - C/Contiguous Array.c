/*
Time C.
66ms Beats 78.13%
Space C.
7.60 MB Beats 31.25%
*/

int findMaxLength(int* nums, int numsSize) {
    int i, res = 0, sum = 0, curCount;
    int *hash = malloc(sizeof(int) * (numsSize * 2 + 1));
    for (i = 0; i < 2 * numsSize + 1; i++) {
        hash[i] = -2;
    }
    hash[numsSize] = -1;
    for(i = 0; i < numsSize; i++){
        if(nums[i] == 0)
            sum--;
        else   
            sum++;

        curCount = hash[sum + numsSize];

        if(curCount != -2) {
            if (res < i - curCount)
                res = i - curCount;
        } 
        else {
        hash[sum + numsSize] = i;
        }
    }
    
    free(hash);
    return res;
}