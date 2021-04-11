class Solution:
    def rightSideView(self, root: TreeNode) -> List[int]:
        arr = list()
        if root is None:
            return []
        
        
        self.helper(root, arr , 1)
        return arr
        
    def helper(self, root , arr , depth  ):
        if not root:
            return None
        if (depth>len(arr)):
            arr.append( root.val)
        self.helper(root.right, arr, depth+1)
        self.helper(root.left, arr, depth+1)
