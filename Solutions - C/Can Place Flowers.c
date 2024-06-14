/*
Time C.
12ms ms Beats 73.10%
Space C.
6.68 MB Beats 99.25%
*/

bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) {
    int i;
    if (n <= 0)
        return true;
    for (i = 0; i < flowerbedSize; i++) {
       
        if (flowerbed[i] == 0 && (i == 0 || flowerbed[i - 1] == 0) && (i == flowerbedSize - 1 || flowerbed[i + 1] == 0)) {
            
            flowerbed[i] = 1;
            n--;

            if (n == 0)
                return true;
        }
    }
    return false;

}