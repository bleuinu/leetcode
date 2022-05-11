/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head) return false;
        if(head->next == nullptr) return false;
        
        ListNode *turtle = head;
        ListNode *hare = head->next;
        
        for(int i=0; i<10000; ++i) {
            turtle = turtle->next;
            if(!hare) return false;
            hare = hare->next;
            if(!hare) return false;
            hare = hare->next;
            if(turtle == hare) return true;
        }
        
        return false;
    }
};