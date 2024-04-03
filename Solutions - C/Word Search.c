/*
Time C.
153ms ms Beats 57.92%
Space C.
5.25 MB Beats 86.88%
*/

bool searchWord(char** board, int boardSize, int boardColSize, int i, int j, char* word, int wordIndex) {
    
    if (word[wordIndex] == '\0')
        return true;
    
    // if it tries to exceed limit, return false
    if (i < 0 || i == boardSize || j < 0 || j == boardColSize || board[i][j] != word[wordIndex])
        return false;

    
    char temp = board[i][j];
    board[i][j] = '0'; // do not go back
    
    //trying up, down, right, left
    bool found = searchWord(board, boardSize, boardColSize, i - 1, j, word, wordIndex + 1) ||
                 searchWord(board, boardSize, boardColSize, i + 1, j, word, wordIndex + 1) ||
                 searchWord(board, boardSize, boardColSize, i, j - 1, word, wordIndex + 1) ||
                 searchWord(board, boardSize, boardColSize, i, j + 1, word, wordIndex + 1);
    
    board[i][j] = temp; // put the word again

    return found;
}

bool exist(char** board, int boardSize, int* boardColSize, char* word) {
    int j, i = 0;

    //finding the first occurence of first character of word
    while(i < boardSize){

        j = 0;
        while(j < boardColSize[0]){
            
             if (searchWord(board, boardSize, *boardColSize, i, j, word, 0))
                return true;

            j++;
        }
        i++;
    }

    
    return false;
}
