/*
Time C.
132ms Beats 70.02%
Space C.
40.84 MB Beats 48.03%
*/

class Solution {
public:
    int openLock(vector<string>& deadends, string target) {

        unordered_set<string> setD(deadends.begin(), deadends.end());

        if (setD.count("0000")) {
            return -1;
        }
        
        queue<pair<string, int>> queue;
        queue.push({"0000", 0});

        unordered_set<string> visited;
        visited.insert("0000");
        
        while (!queue.empty()) {
            auto current = queue.front();
            queue.pop();
            string str = current.first;
            int turns = current.second;
            
            if (str == target) {
                return turns;
            }
            
            for (int i = 0; i < 4; i++) {
                for(int j = -1; j <= 1; j += 2){
                    int digit = (str[i] - '0' + j + 10) % 10;
                    string newstr = str;
                    newstr[i] = '0' + digit;
                    
                    if (visited.find(newstr) == visited.end() && setD.find(newstr) == setD.end()) {
                        visited.insert(newstr);
                        queue.push({newstr, turns + 1});
                    }
                }

            }
        }
        
        return -1;
    }
};