/*
Time C.
66ms Beats 96.46%
Space C.
11.59 MB Beats 97.81%
*/

int findDuplicate(int* nums, int numsSize) {
    int slow = nums[0];
    int fast = nums[0];

    slow=nums[slow];
    fast=nums[nums[fast]];
    

    while(fast!=slow){
        slow=nums[slow];
        fast=nums[nums[fast]];
    }

    slow = nums[0];

    while(slow != fast){
        fast = nums[fast];
        slow = nums[slow];
    }

    return slow;
}