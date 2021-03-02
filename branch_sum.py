class BinaryTree:
    def __init__(self , val):
        self.data = val
        self.right = None
        self.left = None
def branchSum(root):
    sums = []
    calculateBranchSums(root , 0 , sums)
    return sums

def calculateBranchSums(node , runningSum , sums):
    newRunningSum = node.data + runningSum
    if node.left is None and node.right is None:
        runningSum += node.data
        sums.append(runningSum)
        return
    calculateBranchSums(node.left , newRunningSum , sums)
    calculateBranchSums(node.right , newRunningSum, sums)

root = BinaryTree(10)
root.left = BinaryTree(30)
root.right = BinaryTree(15)

sums = branchSum(root)
print(sums)