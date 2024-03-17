/*
Time C.
7ms ms Beats 92.62%
Space C.
20.32 MB Beats 84.54%
*/


class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> res;
        unsigned int i = 0;

        //if the interval found, break the loop
        while(i < intervals.size() && intervals[i][1] < newInterval[0]){
            res.push_back(intervals[i]);
            i++;
        }

        while(i < intervals.size() && intervals[i][0] <= newInterval[1]){
            newInterval[0] = min(newInterval[0], intervals[i][0]);
            newInterval[1] = max(newInterval[1], intervals[i][1]);
            i++;
        }

        res.push_back(newInterval);

        while(i < intervals.size()){
            res.push_back(intervals[i]);
            i++;
        }


        return res;   
    }
};