/*
Time C.
4ms Beats 90.62%
Space C.
40.05 MB Beats 10.25%
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
    ListNode* oddEvenList(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return head;

        //odd head and even head
        ListNode *odd = head;
        ListNode *even = head->next;
        //to combine two list
        ListNode *temp = even;


        while (even != nullptr && even->next != nullptr) {
            odd->next = odd->next->next;
            even->next = even->next->next;
            odd = odd->next;
            even = even->next;
        }

        // concatenate odd and even list
        odd->next = temp;

        return head;
    }
};
