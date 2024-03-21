/*
Time C.
0ms ms Beats 100.00%
Space C.
6.05 MB Beats 83.65%
*/

struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *prev = NULL, *next;

    while (head != NULL){
        next = head->next;
        head->next = prev;

        prev = head;
        head = next;
    }

    return prev;
}