/*
Time C.
0ms Beats 100.0%
Space C.
7.46 MB Beats 98.61%
*/

class Solution {
public:
    string makeGood(string s) {
        int i = 0;
        
        while (s[i + 1] != '\0'){
            if (s[i] == s[i + 1] + 32 || s[i] == s[i + 1] - 32){
                s.erase(i, 2);
                if (i != 0)
                    i -= 2;
                else
                    i--;
            }

            i++;
        }

        return s;   
    }
};