/*
Time C.
19ms Beats 76.14%
Space C.
11.14 MB Beats 71.87%
*/

class Solution {
public:
    int maxVowels(string s, int k) {
        int l = 0, r = 0;
        int temp = 0, res = 0;

        for(r = 0; r < k; r++){
            if(isVowel(s[r]))
                temp++;
        }

        res = temp;

        for(r = k; r < s.length(); r++, l++){
            if(isVowel(s[r]))
                temp++;
            if(isVowel(s[l]))
                temp--;

            res = max(res, temp);
        }

        return res;
    }

private:
    bool isVowel(char ch) { 
        return (ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u');
    }
};