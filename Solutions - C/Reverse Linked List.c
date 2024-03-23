/*
Time C.
94ms Beats 92.61%
Space C.
41.00 MB Beats 82.34%
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