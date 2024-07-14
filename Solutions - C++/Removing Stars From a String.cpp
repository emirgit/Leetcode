/*
Direct manipulating the input string which is better
Time C.
78ms Beats 85.04%
Space C.
25.54 MB Beats 90.43%
*/

class Solution {
public:
    string removeStars(string s) {
        int i, j = 0;
        for(i = 0; i < s.size(); i++){
            if(s[i] != '*'){
                s[j] = s[i];
                j++;
            }    
            else
                j--;
        }

        return s.substr(0, j);
    }
};


/*
By using stack data type
Time C.
81ms Beats 76.56%
Space C.
28.56 MB Beats 12.98%


class Solution {
public:
    string removeStars(string s) {
        stack<char> stk;
        string res;

        for(int i = 0; i < s.size(); i++){
            if(s[i] == '*')
                stk.pop();
            else
                stk.push(s[i]);
        }


        while (!stk.empty()) {
            res += stk.top();
            stk.pop();
        }

        reverse(res.begin(), res.end());

        return res;
    }
};
*/