int mySqrt(int x){
    /*
    5ms Beats 62.61%
    6.21MB Beats 6.45%

    algorithm is better than i * i <= x

    left starts with 0 and right starts with number
    the algorithm like number guessing game
    it is trying to find sqrt of number by sliding the left and right

    */
    int l = 0;
    int r = x;
    
    long mid;
    while (r >= l){
        mid = (r + l) / 2;

        if (mid * mid <= x)
            l = mid + 1;
        else
            r = mid - 1;
    }

    return (r);
}





int mySqrt(int x){
    /*
    old solutin
    13 ms 41.57%
    6.3mb 6.45%
    */
    long index = 0;

    while (index * index <= x)
        index++;

    return (index - 1);
}