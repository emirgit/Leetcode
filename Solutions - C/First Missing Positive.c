/*
Time C.
35ms ms Beats 91.55%
Space C.
43.53 MB Beats 81.31%
*/

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int length = nums.size();
        for(int i = 0; i < length; i++){
            int num=nums[i];
            

            
            while(num >=1 && num <=length && nums[num-1]!=num && num!=i+1){
                swap(nums[num-1],nums[i]);
                num=nums[i];
            }

        }

        for(int i = 0; i < length; i++){
            if(nums[i] != i + 1)
                return i + 1;
        }
        

        return length + 1;
    }
};