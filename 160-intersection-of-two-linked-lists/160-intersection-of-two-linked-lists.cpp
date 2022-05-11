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
        unordered_set<ListNode *> s;
        auto x = headA;
        auto y = headB;
        
        while(x && y) {
            s.insert(x);
            x = x->next;
        }
        
        while(y) {
            if(s.find(y) != s.end()) return y;
            s.insert(y);
            y = y->next;
        }
        
        return NULL;
    }
};