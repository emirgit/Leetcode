/*
Time C.
55ms Beats 84.80%
Space C.
61.32 MB Beats 64.66%
*/

class Solution {
public:
    int maxArea(vector<int>& height) {
        int max = 0;
        int r = 0, l = height.size() - 1;

        while(l > r){

            int area = (l - r) * min(height[r], height[l]);
            if (area > max)
                max = area;
            
            if(height[r] > height[l])
                l--;
            else
                r++;

        }

        return max;
    }
};