/*
Time C.
0ms Beats 100.00%
Space C.
12.58 MB Beats 59.22%
*/

class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0;
        int ovr = 0;
        int size = chars.size();

        while(i < size) {
            int j = i + 1;
            
            while(j < size && chars[i] == chars[j])
                j++;
            
            chars[ovr] = chars[i];
            ovr++;
            int ctr = j - i;
            if (ctr > 1) {
                for(char c : to_string(ctr)){
                    chars[ovr] = c;
                    ovr++;
                }
            }

            i = j;
        }
        chars.resize(ovr);
        return ovr;
    }
};