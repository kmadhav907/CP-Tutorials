# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def inorderTraversal(self, root: TreeNode) -> List[int]:
        list_val = []
        inorder(root , list_val)
        return list_val
        

def inorder(root , list_val):
    if root is None:
        return
    else:
        inorder(root.left, list_val)
        list_val.append(root.val)
        inorder(root.right , list_val)
        