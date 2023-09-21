/**
 * 0ms
Beats 100.00%

6.60MB
Beats 10.86%
 * 
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    struct ListNode* res;

    if (list1 == NULL)
        return list2;
    else if (list2 == NULL)
        return list1;



    if (list1->val >= list2->val){
        res = list2;
        list2 = list2->next;
    }
    else {
        res = list1;
        list1 = list1->next;
    }

    struct ListNode* temp = res;
    while (list1 != NULL && list2 != NULL){
        if (list1->val >= list2->val){
            temp->next = list2;
            list2 = list2->next;
        }
        else {
            temp->next = list1;
            list1 = list1->next;
        }

        temp = temp->next;
    }

    if (list1 == NULL)
        temp->next = list2;
    else 
        temp->next = list1;
    return (res);
}