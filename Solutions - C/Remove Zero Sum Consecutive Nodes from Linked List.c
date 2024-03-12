/*
Time C.
3 ms Beats 90.00%
Space C.
6.18 MB Beats 90.00%
*/
struct ListNode* removeZeroSumSublists(struct ListNode* head) {
    int sum;
    struct ListNode dummy, *ptr, *temp;
    
    ptr = &dummy;
    dummy.next = head;
    while(ptr && ptr->next){

        sum = 0;
        temp = ptr->next;
        while(temp){
            sum += temp->val;
            if(!sum)
                ptr->next = temp->next;

            temp = temp->next;
        }
        
        ptr = ptr->next;  
    }

    return dummy.next;
}