# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def swapPairs(self, head: ListNode) -> ListNode:
        self.swapNodes(head)
        return head
    def swapNodes(self , head):
        if head is None:
            return head
        if head.next is None:
            return head
        cur = head
        swap_ptr = head.next
        while(cur != None   and swap_ptr != None ):
            temp = cur.val
            cur.val = swap_ptr.val
            swap_ptr.val = temp
            cur = cur.next.next
            if swap_ptr.next is None:
                break
            swap_ptr = swap_ptr.next.next