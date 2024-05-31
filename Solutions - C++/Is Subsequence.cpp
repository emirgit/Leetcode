/*
Time C.
0ms Beats 100.00%
Space C.
7.33 MB Beats 93.63%
*/

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sp = 0;

        for(int tp = 0; tp < t.length() && sp < s.length(); tp++){
            if(t[tp] == s[sp])
                sp++;

        }

        return sp == s.length();
    }
};