int reverse(int x){
    int sum = 0;

    while (x != 0 ){
        if (sum >= 214748364.7 || sum <= -214748364.8)
            return 0;
        sum *= 10;
        sum += x % 10;
        x /= 10;
    }

    return sum;
}