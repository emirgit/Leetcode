/*
Time C.
23ms ms Beats 89.74%
Space C.
6.10 MB Beats 100.00%
*/

#define SIZE 26

int leastInterval(char* tasks, int tasksSize, int n) {
    int freq[SIZE] = {0};
    for(int i = 0; i < tasksSize; i++){
        freq[tasks[i] - 'A']++;
    }

    int max = -1;

    for(int i = 0; i < SIZE; i++){
        if (freq[i] > max) {
            max = freq[i];
        }
    }

    int idle = 0;
    for(int i = 0; i < SIZE; i++) {
        if (freq[i] == max) {
            idle++;
        }
    }

    int res = (max - 1) * (n + 1) + idle;
    return (res > tasksSize) ? res : tasksSize;
}