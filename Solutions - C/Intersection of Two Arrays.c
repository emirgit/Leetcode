/**
 Time Complexity
 0ms beats 100.00%
 Space Complexity
 5.86 MB beats 93.13%

Time Complexity: O(max(nums1Size, nums2Size))
Space Complexity: O(min(nums1Size, nums2Size))
 */

 #define LIMIT 1001

int* fillTable(int* numsBig, int numsBigSize, int* numsSmall, int numsSmallSize, int* returnSize){
    int* res = malloc(sizeof(int) * numsSmallSize);
    int hash[LIMIT] = {0};
    int i;

    for(i = 0; i < numsBigSize; i++){
        hash[numsBig[i]] = 1;
    }

    *returnSize = 0;
    for(i = 0; i < numsSmallSize; i++){
        if(hash[numsSmall[i]]){
            res[*returnSize] = numsSmall[i];
            hash[numsSmall[i]] = 0;
            (*returnSize)++;
        }
    }

    return res;
}

int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    //from 0 to 1000 exclusive (1001 element);

    if(nums1Size > nums2Size)
        return fillTable(nums1, nums1Size, nums2, nums2Size, returnSize);
    else
        return fillTable(nums2, nums2Size, nums1, nums1Size, returnSize);
}