/*
Time C.
3ms ms Beats 98.55%
Space C.
7.60 MB Beats 98.11%
*/

bool hasCycle(struct ListNode *head) {
    struct ListNode *fast = head;
    while(fast && fast->next){
        fast = fast->next->next;
        head = head->next;
        if(head == fast)
            return (true);
    }

    return (false);
}