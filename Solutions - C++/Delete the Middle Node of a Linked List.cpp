/*
Time C.
510ms Beats 89.65%
Space C.
298.31 MB Beats 39.61%
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */


class Solution {


public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* slow = head;
        ListNode* preSlow;

        if(head->next == NULL)
            return NULL;

        for(ListNode* fast = head; 
            fast != NULL && fast->next !=  NULL; 
            fast = fast->next->next) {
            preSlow = slow;
            slow = slow->next;

        }


        preSlow->next = slow->next;
        delete slow;
        
        return head;
    }
};