# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isValidBST(self, root: TreeNode) -> bool:
        if root is None:
            return True
        return self.validateHelper(root, float('-inf'), float('inf'))
    def validateHelper(self, root , low , high):
        if root is None:
            return True
        if root.val <= low or root.val >= high:
            return False
        return self.validateHelper(root.left, low, root.val) and self.validateHelper(root.right, root.val, high)
