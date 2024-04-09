/*
Time C.
0ms Beats 100.00%
Space C.
5.45 MB Beats 94.74%
*/

int timeRequiredToBuy(int* tickets, int ticketsSize, int k) {
    int res = 0;

    for(int i = 0; i < ticketsSize; i++){
        if(i < k){
            if(tickets[k] > tickets[i])
                res += tickets[i];
            else
                res += tickets[k];

        }
        else if (i > k){
            if(tickets[k] > tickets[i])
                res += tickets[i];
            else 
                res += tickets[k] - 1;

        }
        else
            res += tickets[k];
    }

    return res;
}