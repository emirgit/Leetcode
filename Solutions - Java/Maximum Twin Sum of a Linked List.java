/*  
Floyd's Tortoise and Hare

Time C.
3ms Beats 100.00%
Space C.
62.98 MB Beats 84.73%


*
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */

class Solution {

    public int pairSum(ListNode head) {
        ListNode next, prev = null, slow = head, fast = head;
        int res = 0;
        while (fast != null) {
            fast = fast.next.next;
            next = slow.next;
            slow.next = prev;
            prev = slow;
            slow = next;
        }

        while (prev != null) {
            res = Math.max(res, prev.val + slow.val);
            prev = prev.next;
            slow = slow.next;
        }

        return res;
    }
}