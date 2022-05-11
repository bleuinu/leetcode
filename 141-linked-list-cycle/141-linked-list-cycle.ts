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

function hasCycle(head: ListNode | null): boolean {
    let w = head;
    let r = head;
    
    while(r && r.next) {
        w = w.next
        r = r.next
        if(!r) return false;
        r = r.next
        if(w===r) return true;
    }
    
    return false;
};