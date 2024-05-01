/*
Time C.
0ms Beats 100.00%
Space C.
8.44 MB Beats 81.35%
*/

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int i;

        if(str1 + str2 != str2 + str1)
            return "";
        for(i = 0; str1[i] != '\0' && str1[i] == str2[i]; i++);

        int value = gcd(str1.size(), str2.size());
        i = min(value, i);
        return str1.substr(0, i);
    }
};