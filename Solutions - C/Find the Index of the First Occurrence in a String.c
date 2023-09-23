int strStr(char * haystack, char * needle){
    int i = 0, j;
    /*
    0ms
Beats 100.00%
6.46MB
Beats 9.64%



    i is the right slider
    j is the left slider
    
    i slides until haystack and needle has the same character
    after that it checks other 
    */
    if (!needle[0])
        return (0);
    
    while(haystack[i]){
        j = 0;

        while(haystack[i + j] == needle[j] && haystack[i + j])
            j++;

        if (!needle[j])
            return (i);

        i++;
    }

    return (-1);
}