/*
0ms Beats 100.00%
6.53MB Beats 5.43%*/


int* counter(char *str){
    //calloc for initializing the array with 0
    int *count = (int *)calloc(26, sizeof(int));

    while (*str != '\0'){
        count[*str - 'a'] += 1;
        str++;
    }
    /*for(i = 0; str[i] != '\0'; i++){
        count[str[i] - 97] += 1;
    }*/


    return count;
}



int isAnagram(char * s, char * t){
    /*
    ascii 122 (z) - 97 (a) + 1 = 26 char

    a = 0. index
    ...
    ...
    z = 25. index
    */
    
    int i;
    int *count_T, *count_S;

    count_S = counter(s);
    count_T = counter(t);

    
    for(i = 0; i < 26; i++){
        if (count_S[i] != count_T[i])
            return (0);
    }

    free(count_T);
    free(count_S);
    return (1);
}

