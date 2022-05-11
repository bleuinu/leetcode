# Definition for singly-linked list.
# class ListNode
#     attr_accessor :val, :next
#     def initialize(val)
#         @val = val
#         @next = nil
#     end
# end

# @param {ListNode} head
# @return {Boolean}
def hasCycle(head)
    w = head
    r = head
    
    while r and r.next
        w = w.next
        r = r.next
        return false if !r
        r = r.next
        
        return true if w == r
    end
    
    return false
end