/*
Time C.
3ms Beats 99.62%
Space C.
7.27 MB Beats 9.89%
*/

#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))

int trap(int* height, int heightSize) {
    int i;
    int* left = malloc(sizeof(int) * heightSize);
    int* right = malloc(sizeof(int) * heightSize);
    
    left[0] = height[0];
    for (i = 1; i < heightSize; i++) {
        left[i] = max(left[i - 1], height[i]);
    }
    
    right[heightSize - 1] = height[heightSize - 1];
    for (i = heightSize - 2; i >= 0; i--) {
        right[i] = max(right[i + 1], height[i]);
    }
    int trappedWater = 0;
    for (i = 0; i < heightSize; i++) {
        trappedWater += min(left[i], right[i]) - height[i];
    }
    
    return trappedWater;
}