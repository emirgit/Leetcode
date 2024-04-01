/*
Time C.
0ms ms Beats 100.0%
Space C.
5.54 MB Beats 66.48%
*/

int isChar(char c){
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

int lengthOfLastWord(char* s) {
    int i = 0, res = 0;

    while (s[i] != '\0')
        i++;

    i--;
    while (s[i] == ' ')
        i--;

    while (i >= 0 && isChar(s[i])){
        i--;
        res++;
    }
    
    return res;
}