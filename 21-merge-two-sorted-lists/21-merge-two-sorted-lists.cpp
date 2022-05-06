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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1) return list2;
        if(!list2) return list1;
            
        ListNode *headA = list1;
        ListNode *headB = list2;
        ListNode *res = nullptr;
        
        if(headA->val <= headB->val) {
            res = headA;
            headA = headA->next;
        } else {
            res = headB;
            headB = headB->next;
        }
        
        ListNode *temp = res;
        
        while(headA != nullptr && headB != nullptr) {
            if(headA->val <= headB->val) {
                temp->next = headA;
                headA = headA->next;
            } else {
                temp->next = headB;
                headB = headB->next;
            }
            temp = temp->next;
        }
        
        temp->next = ((headA) ? headA : headB);

        return res;
    }
};