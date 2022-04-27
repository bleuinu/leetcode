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

function removeNthFromEnd(head: ListNode | null, n: number): ListNode | null {
    let r: ListNode = head;
    let t: ListNode = head;
    
    for(let i=0; i<n; i++) {
        r = r.next;
    }
    
    if(r===null) { 
        head = head.next;
        return head;
    }
    
    while(r.next) {
        r = r.next;
        t = t.next;
    }
    
    t.next = t.next.next;
    
    return head;
};