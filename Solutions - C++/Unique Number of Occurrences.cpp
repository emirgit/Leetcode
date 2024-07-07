/*
Time C.
0ms Beats 100.00%
10.76 MB Beats 82.35%
*/

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int> freqmp;
        set<int> uniqSet;

        for(int i = 0; i < arr.size(); i++){
            freqmp[arr[i]]++;
        }


        for(auto i = freqmp.begin(); i != freqmp.end(); i++){
            uniqSet.insert(i->second);
        }

        return uniqSet.size() == freqmp.size();
    }
};