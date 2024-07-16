/*
Time C.
0ms Beats 100.00%
Space C.
8.13 MB Beats 23.52%
*/

class Solution {
private:
    int convertToNum(stack<char>& stk){
        int num = 0;
        int digit = 0;
        while(!stk.empty() && (stk.top() >= '0' && stk.top() <= '9')){
            num += (stk.top() - '0') * pow(10, digit);
            digit++;
            stk.pop();
        }

        return num;
    }

public:
    string decodeString(string s) {
        int count;
        stack<char> stk;
        for(int i = 0; i < s.size(); i++){
            if(s[i] != ']') {
                stk.push(s[i]);
            }
            else {
                string temp = "";

                while (stk.top() != '['){
                    temp += stk.top();
                    stk.pop();
                }
                reverse(temp.begin(), temp.end());

                //popping the '['
                stk.pop();
                count = convertToNum(stk);
                
                while(count > 0){
                    for(int j = 0; j < temp.size() ; j++)
                        stk.push(temp[j]);
                    count--;
                }
            }

        }


        string res(stk.size(), ' ');
        for (int i = stk.size() - 1; i >= 0; i--) {
            res[i] = stk.top();
            stk.pop();
        }

        return res;
    }
};