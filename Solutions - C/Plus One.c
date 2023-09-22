/**
 * 0ms
Beats 100.00%
6.57MB
Beats 10.82%
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* plusOne(int* digits, int digitsSize, int* returnSize){
    int i;
    int over = 1;

    for(i = digitsSize - 1; i >= 0; i--){
        if (over && digits[i] == 9){
            digits[i] = 0;
        }
        else if (over){
            digits[i] += 1;
            over = 0;
        }
    }

    if (!over){
        (*returnSize) = digitsSize;
        return (digits);
    }
    
    (*returnSize) = digitsSize + 1;
    int* res = (int *)malloc(sizeof(int) * (*returnSize));
    res[0] = 1;
    for (i = 1; i <  (*returnSize); i++){
        res[i] = 0;
    }

    return (res);
}