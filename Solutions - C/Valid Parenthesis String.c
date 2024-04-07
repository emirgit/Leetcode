/*
Time C.
0ms Beats 100.00%
Space C.
5.25 MB Beats 92.86%
*/

bool checkValidString(char* s) {
    int enough = 0, max = 0;

    for(int i = 0; s[i] != '\0'; i++){
        if(s[i] == '('){
            enough++;
            max++;
        }
        else if (s[i] == ')'){
            enough--;
            max--;
        }
        else{
            enough--;
            max++;
        }

        if(max < 0)
            return false;
        
        if (enough < 0)
            enough = 0;

    }

    return enough == 0;
}