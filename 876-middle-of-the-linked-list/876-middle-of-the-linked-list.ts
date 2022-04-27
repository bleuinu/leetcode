/**
 * Definition for singly-linked list.
 * class ListNode {
 *     val: number
 *     next: ListNode | null
 *     constructor(val?: number, next?: ListNode | null) {
 *         this.val = (val===undefined ? 0 : val)
 *         this.next = (next===undefined ? null : next)
 *     }
 * }
 */

function middleNode(head: ListNode | null): ListNode | null {
    if(!(head.next)) return head;
    if(!(head.next.next)) return head.next;
    
    let t: ListNode = head;
    let h: ListNode = head.next.next;
    
    while(true) {
        t = t.next;
        if(!h) break;
        h = h.next;
        if(!h) break;
        h = h.next;
    }
    
    return t;
};