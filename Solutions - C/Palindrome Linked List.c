
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


bool isPalindrome(struct ListNode* head) {
    if (!head || !head->next)
        return true;
    if (!head->next->next)
        return (head->val == head->next->val) ? true :  false;
    

    struct ListNode *s, *f;
    s = head;
    f = head;

    while (f->next && f->next->next){
        s = s->next;
        f = f->next->next;
    }
    s = reverseList(s->next);

    while(head && s){
        if (head->val != s->val)
            return false;

        head = head->next;
        s = s->next;
    }

    return true;
}
