class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(!head) return head;
        
        ListNode* prev = nullptr;
        auto curr = head;
        
        while(curr != nullptr) {
            
            if(curr->val == val) {
                if(prev == nullptr) {
                    head = curr->next;
                } else {
                    prev->next = curr->next;
                }
            } else {
                prev = curr;
            }
            curr = curr->next; 
        }
        
        return head;
    }
};