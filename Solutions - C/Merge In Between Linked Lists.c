/*
Time C.
98ms ms Beats 95.06%
Space C.
32.57 MB Beats 95.06%
*/

struct ListNode* mergeInBetween(struct ListNode* list1, int a, int b, struct ListNode* list2){
    int i;
    struct ListNode* head = list1;

    for(i = 0; i < a - 1; i++){
        list1 = list1->next; 
    }

    struct ListNode* temp = list1;
    while (i <  b){
        temp = temp->next;
        i++;
    }
    list1->next = list2;
    while (list2->next != NULL){
        list2= list2->next;
    }

    list2->next = temp->next;

    return head;
}