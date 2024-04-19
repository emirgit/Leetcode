/*
Time C.
18ms Beats 78.28%
Space C.
8.66 MB Beats 91.72%
*/

void dfs(char** grid, int i, int j, int gridSize, int gridColSize){
    if (!(i >= 0 && i < gridSize && j >= 0 && j < gridColSize)) 
        return;
    if (grid[i][j]=='1'){
        grid[i][j]='M';
        dfs(grid, i+1, j, gridSize, gridColSize);
        dfs(grid, i, j+1, gridSize, gridColSize);
        dfs(grid, i-1, j, gridSize, gridColSize);
        dfs(grid, i, j-1, gridSize, gridColSize);
    }           
}

int numIslands(char** grid, int gridSize, int* gridColSize) {
    int i, j, res = 0;;

    for(i = 0; i < gridSize; i++){
        for(j = 0; j < gridColSize[i]; j++){
            
            if (grid[i][j] == '1'){
                res += 1;
                dfs(grid, i, j, gridSize, gridColSize[i]);
            }
        }
    }

    return res;
}