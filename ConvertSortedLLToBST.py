# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def sortedListToBST(self, head: ListNode) -> TreeNode:
        list_nodes = self.traverse(head)
        root = self.createBST(list_nodes)
        return root
    def createBST(self,list_nodes):
        n = len(list_nodes)
        if n == 0:
            return None
        else:
            mid = n // 2
            root = TreeNode(list_nodes[mid])
            root.left = self.createBST(list_nodes[:mid])
            root.right = self.createBST(list_nodes[mid+1:])
            return root
    def traverse(self,head):
        list_nums = []
        if head is None:
            return []
        cur = head
        while cur is not None:
            list_nums.append(cur.val)
            cur = cur.next
        return list_nums
