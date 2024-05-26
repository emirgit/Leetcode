/*
Time C.
0ms Beats 100.00%
Space C.
10.85 MB Beats 71.78%
*/

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> res;
        int most = candies[0];

        for(int i = 1; i < candies.size(); i++){
            if(candies[i] > most)
                most = candies[i];
        }

        for(int candy : candies){
            if(candy + extraCandies >= most )
                res.push_back(true);
            else
                res.push_back(false);
        }

        return res;
    }
};