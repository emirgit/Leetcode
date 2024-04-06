/*
Time C.
15ms Beats 92.60%
Space C.
13.32 MB Beats 38.76%
*/

class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int counter = 0;
        string res = "";
        for(int i = 0; s[i] != '\0'; i++){
            if (s[i] == '(')
                counter++;
            else if (s[i] == ')'){
                if(counter > 0)
                    counter--;
                else
                    continue;

            }

            res += s[i];
        }

        string resnew = "";
        for(int i = res.size() - 1; i >= 0; i--){
            if (res[i] == '(' && counter > 0)
                counter--;
            else
                resnew += res[i];
        }
        reverse(resnew.begin(), resnew.end());

        return resnew;
    }
};