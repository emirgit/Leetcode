/*
Time C.
48ms Beats 97.93%
Space C.
8.49 MB Beats 100.00%
*/

int islandPerimeter(int** grid, int gridSize, int* gridColSize) {
    int i, j, res = 0;;

    for(i = 0; i < gridSize; i++){
        for(j = 0; j < gridColSize[i]; j++){
            
            if (grid[i][j] == 1){
                res += 4;
                if (i > 0 && grid[i - 1][j] == 1)
                    res -= 2;
                if(j > 0 && grid[i][j - 1] == 1)
                    res -= 2;

            }
        }
    }

    return res;
}