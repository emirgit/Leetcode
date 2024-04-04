/*
Time C.
0ms Beats 100.00%
Space C.
5.34 MB Beats 77.14%
*/


int maxDepth(char* s) {

    int i, ctr = 0, res = 0;
    
    
    for (i = 0; s[i]; i++){

        if (s[i] == '(') 
            ctr++;
        
        if (ctr > res)
            res = ctr;

        if (s[i] == ')') 
            ctr--;
    }

    return res;
}