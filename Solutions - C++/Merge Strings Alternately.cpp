/*
Time C.
0ms Beats 100.00%
Space C.
7.59 MB Beats 79.84%
*/

class Solution {
private:
    void fill_merged(string& merged, string& word, int& p){
        while(word[p] != '\0'){
            merged += word[p];
            p++;
        }
    }

public:
    string mergeAlternately(string word1, string word2) {
        string merged = "";
        int w1p = 0, w2p = 0;

        while(word1[w1p] != '\0' && word2[w2p] != '\0'){
            merged += word1[w1p];
            merged += word2[w2p];

            w1p++;
            w2p++;
        }
        if (word1[w1p] == '\0')
            fill_merged(merged, word2, w2p);
        else
            fill_merged(merged, word1, w1p);

        return merged;
    }
};