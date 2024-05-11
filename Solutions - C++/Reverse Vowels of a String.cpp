/*
Time C.
5ms Beats 73.48%
Space C.
8.99 MB Beats 95.08%
*/
#define WORD 5

class Solution {
private:
    char vovel[WORD] = {'a', 'e', 'i', 'o', 'u'};
    bool isİn(char c){ 
        int i;

        for(i = 0; i < WORD; i++){
            if(c == vovel[i] || c == vovel[i] - 32)
                return 1;
        }

        return 0;
    }

public:
    string reverseVowels(string s) {
        int temp, r = 0;
        int l = s.size() - 1;

        while(r < l){
            if(isİn(s[r])){
                if(isİn(s[l])){
                    temp = s[r];
                    s[r] = s[l];
                    s[l] = temp;
                    l--;
                    r++;
                }
                else
                    l--;
            }
            else
                r++;
        }

        return s;
    }
};