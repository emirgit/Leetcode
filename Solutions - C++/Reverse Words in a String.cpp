/*
with O(1) size 

Time C.
0ms Beats 100.00%
Space C.
8.05 MB Beats 98.62%

eg.
"the sky is blue"
"eulb si yks eth"
->
"blue si yks eth"
->
"blue is yks eth"
->
"blue is sky eth"
->
output "blue is sky the"

*/

class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());
        int size = s.size();
        int l = 0;
        int r = 0;
        int i = 0;

        for(int i = 0; i < size; i++){
            //skip the white spaces
            while(i < size && s[i] == ' ')
                i++;

            if (i != size){
                while(i < size && s[i] != ' '){
                    s[r] = s[i];
                    r++;
                    i++;
                }
                reverse(s.begin() + l, s.begin() + r);
                s[r] = ' ';
                r++;
                l = r;
            }
                
        }
        s.resize(r - 1);
        return s;
    }
};



/*
by using iss
Time C.
4ms Beats 58.03%
Space C.
9.30 MB Beats 65.75%


class Solution {
public:
    string reverseWords(string s) {
        string res;
        string temp;
        string word;
        istringstream iss(s);

        temp += " ";
        while(iss >> word){
            if(word.find_first_not_of(' ') != std::string::npos){
                temp += word + " ";
            }
        }
        cout << "|" << temp << "|" << endl;
        word.clear();
        for(int i = temp.length() - 2; i >= 0; i--){
            if(temp[i] == ' '){
                reverse(word.begin(), word.end());
                res += word;
                if(i)
                res += " ";
                word.clear();
            }
            else{
                word += temp[i];
            }
        }
        

        return res;
    }
};
*/