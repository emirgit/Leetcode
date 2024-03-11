/*
lowercase English letters is 26 letters
so the limit of the hash table should 26
*/


#define LIMIT 26

/*
better runtime sacrifice memory

Time C.
0 ms beats 100.00%
Space C.
5.51 MB betas 46.67%


bool isIn(char* order, char c){
    int i;

    for(i = 0; order[i] != '\0'; i++){
        if(order[i] == c){
            return (1);
        }
    }
    
    return (0);
}

char* customSortString(char* order, char* s) {
    int hash[26] = {0};
    char* sC = malloc(sizeof(char) * (strlen(s)) + 1);
    int i, j, k;

    for(i = 0; s[i] != '\0'; i++)
        hash[s[i] - 'a']++;

    j = 0;
    for(i = 0; order[i] != '\0'; i++){
        if (hash[order[i] - 'a'] > 0){
            while (hash[order[i]  - 'a'] != 0){
                sC[j++] = order[i];
                hash[order[i]  - 'a']--;
            }
        }
    }

    for(i = 0; s[i] != '\0'; i++){
        if(!isIn(order, s[i])){
            sC[j] = s[i];
            j++;
        }

    }
    sC[j] = '\0';


    return sC;
}
*/

/*
Time C.
0 ms 100.00% beats
Space C.
5.26 MB 96.55% beats
*/

char* customSortString(char* order, char* s) {
    int hash[LIMIT] = {0};
    int i, j;

    for(i = 0; s[i] != '\0'; i++)
        hash[s[i] - 'a']++;
    
    j = 0;
    for(i = 0; order[i] != '\0'; i++){
        while (hash[order[i]  - 'a'] > 0){
            s[j++] = order[i];
            hash[order[i]  - 'a']--;
        }
    }

    //if there is another character doesn't remaining 0, that is the character doesn't match with order
    for(i = 0; i < LIMIT; i++){
        while(hash[i] > 0){
            s[j++] = i + 'a';
            hash[i]--;
        }
    }

    return s;
}