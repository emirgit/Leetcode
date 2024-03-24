/*
Time C.
12ms Beats 85.99%
Space C.
8.62 MB Beats 83.85%
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

void reorderList(struct ListNode* head) {
    if (!head || !head->next || !head->next->next) return;

    struct ListNode *slow, *fast;
    slow = fast = head;
    while (fast->next && fast->next->next) {
        slow=slow->next;
        fast=fast->next->next;
    }

    //slow on the mid of the list now
    struct ListNode* current = slow;
    slow = slow->next;
    current->next = NULL;
    slow = reverseList(slow);

    while (head && slow) {
        struct ListNode* head_next=head->next;
        struct ListNode* slow_next=slow->next;

        head->next=slow;
        slow->next=head_next;

        head=head_next;
        slow=slow_next;
    }  

}