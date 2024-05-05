class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> res(2);
        map<int,int> map1, map2;
        int size1 = nums1.size();
        int size2 = nums2.size();
        int i;

        for(i = 0; i < size1; i++){
            map1[nums1[i]]++;
        }

        for(i = 0; i < size2; i++){
            map2[nums2[i]]++;
        }

        for(i = 0; i < size1; i++){
            if(map2.find(nums1[i]) == map2.end() && map1[nums1[i]] != -1){
                res[0].push_back(nums1[i]);
                map1[nums1[i]] = -1;
            }
        }


        for(i = 0; i < size2; i++){
            if(map1.find(nums2[i]) == map1.end() && map2[nums2[i]] != -1){
                res[1].push_back(nums2[i]);
                map2[nums2[i]] = -1;
            }
        }

        return res;
    }
};