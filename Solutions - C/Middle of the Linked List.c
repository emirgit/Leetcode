/*
Time C.
0 ms Beats 100.00%
Space C.
5.56 MB Beats 82.63%
*/

struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode *fast;

    fast = head;
    while (fast && fast->next){
        head = head->next;
        fast = fast->next->next;
    }

    return head;
}