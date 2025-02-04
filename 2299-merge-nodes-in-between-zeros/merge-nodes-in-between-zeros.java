/**
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
    public ListNode mergeNodes(ListNode head) {
        ListNode temp = new ListNode(0); 
        ListNode tail = temp; 
        ListNode current = head.next; 
        int sum = 0;

        while (current != null) {
            if (current.val == 0) { 
                tail.next = new ListNode(sum);
                tail = tail.next; 
                sum = 0; 
            } else {
                sum += current.val; 
            }
            current = current.next; 
        }

        return temp.next; 
    }
}