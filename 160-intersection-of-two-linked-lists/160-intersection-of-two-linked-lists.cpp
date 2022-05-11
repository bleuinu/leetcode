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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        set<ListNode *> s;
        auto x = headA;
        auto y = headB;
        
        while(x) {
            s.insert(x);
            x = x->next;
        }
        
        while(y) {
            if(s.find(y) != s.end()) return y;
            else s.insert(y);
            y = y->next;
        }
        
        return NULL;
    }
};