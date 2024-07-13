/*
It is best among the code I wrote
the only difference with others is the data type of the keys
1- List<Integer>
2- String (StringBuilter to string)
3- String (not by using StringBuilder, pure concatenation)

Time C.
17ms Beats 88.50%
Space C.
49.84 MB Beats 62.10%
*/

class Solution {
    public int equalPairs(int[][] grid) {
        int size = grid.length, i, j;
        int res = 0;
        HashMap<List<Integer>, Integer> hmap = new HashMap<>();
        for(i = 0; i < size; i++) {
            List<Integer> list = new ArrayList<>();
            
            for(j = 0; j < size; j++)
                list.add(grid[i][j]);

             hmap.put(list, hmap.getOrDefault(list, 0) + 1);
        }

          for(i = 0; i < size; i++){
            List<Integer> list = new ArrayList<>();

            for(j = 0; j < size; j++)
                list.add(grid[j][i]);
           
            res += hmap.getOrDefault(list, 0);
        }
        return res;
    }
}

/*
It is now better than below code

Time C.
31ms Beats 61.93%
Space C.
52.06 MB Beats 29.75%


class Solution {
    public int equalPairs(int[][] grid) {
        int size = grid.length, i, j;
        int res = 0;
        HashMap<String, Integer> hmap = new  HashMap<String, Integer>();

        for (i = 0; i < size; i++) {
            StringBuilder str = new StringBuilder();
            for (j = 0; j < size; j++) {
                str.append(grid[i][j]);
                str.append('|');
            }
            hmap.put(str.toString(), hmap.getOrDefault(str.toString(), 0) + 1);
        }

        for (i = 0; i < size; i++) {
            StringBuilder str = new StringBuilder();
            for (j = 0; j < size; j++) {
                str.append(grid[j][i]);
                str.append('|');
            }
            res += hmap.getOrDefault(str.toString(), 0);
        }

        return res;
    }
}
*/


/*
Slow because of the String concatenation
Loop creates a new String object every time, which is very inefficient 

Time C.
97ms Beats 14.46%
Space C.
55.16 MB Beats 7.24%



class Solution {
    public int equalPairs(int[][] grid) {
        int size = grid.length, i, j;
        int res = 0;
        HashMap<String, Integer> hmap = new  HashMap<String, Integer>();

        for(i = 0; i < size; i++) {
            String str = "";
            for(j = 0; j < size; j++)
                str += Integer.toString(grid[i][j]) + '|';
            hmap.put(str, hmap.getOrDefault(str, 0) + 1);
        }

        for(i = 0; i < size; i++){
            String str = "";
            for(j = 0; j < size; j++)
                str += Integer.toString(grid[j][i]) + '|';
            res += hmap.getOrDefault(str, 0);
        }

        return res;
    }
}


*/