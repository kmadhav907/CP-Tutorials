# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def arrayList(self,listNode):
        arr = []
        while(listNode is not None):
            arr.append(listNode.val)
            listNode = listNode.next
        print(arr)
        return arr
    def mergeTwoLists(self, l1: ListNode, l2: ListNode) -> ListNode:
        new_head  = None
        listNodes1 = self.arrayList(l1) if l1 is not None else []
        listNodes2 = self.arrayList(l2) if l2 is not None else []
        
        listNodes1 = listNodes1 + listNodes2
        if (len(listNodes1) == 0):
            return None
        
        listNodes1.sort()
        
        head = ListNode(listNodes1[0])
        cur = head
        for i in range(1 , len(listNodes1)):
            temp =  ListNode(listNodes1[i])
            cur.next = temp
            cur = cur.next
        return head
        
        
            
