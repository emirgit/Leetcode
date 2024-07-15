/*
It doesn't required to use stack for this problem but I used it because of LeetCode 75

Time C.
0ms Beats 100.00%
Space C.
20.88 MB Beats 8.42%
*/

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> stk;

        for(int asteroid : asteroids){
            bool isAlive = true;
            while (!stk.empty() && asteroid < 0 && stk.top() > 0 && isAlive){
                if(stk.top() < -asteroid){
                    stk.pop();
                }
                else if (stk.top() > -asteroid){
                    isAlive = false;
                }
                else {
                    stk.pop();
                    isAlive = false;
                }
            }

            if (isAlive)
                stk.push(asteroid);
        }

        /*
        I used optimized one
        vector<int> res;
        while(!stk.empty()){
            res.push_back(stk.top());
            stk.pop();
        }

        reverse(res.begin(), res.end());
        */
        

        vector<int> res(stk.size());
        for (int i = stk.size() - 1; i >= 0; i--) {
            res[i] = stk.top();
            stk.pop();
        }


        return res;
    }
};