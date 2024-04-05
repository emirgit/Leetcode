/*
Time C.
0ms Beats 100.00%
Space C.
5.71 MB Beats 57.22%
*/

int removeElement(int* nums, int numsSize, int val) {
    int res = 0;

    for(int i = 0; i < numsSize; i++){
        if(nums[i] != val){
            nums[res] = nums[i];
            res++;
        }


    }

    return res;
}