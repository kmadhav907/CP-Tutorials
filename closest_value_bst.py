class BinarySearchTree:
    def __init__(self, val):
        self.data = val
        self.right = None
        self.left = None
def findClosestValueInBST(tree , target):
    return findClosestValue(tree, target , float("inf"))
def findClosestValue(tree , target , closest):
    if tree is None:
        return closest
    if abs(target - closest) > abs(target - tree.data):
        closest = tree.data
    if target < tree.data:
        return findClosestValue(tree.left , target , closest)
    if target > tree.data:
        return findClosestValue(tree.right, target , closeset)
    else:
        return closest

root = BinarySearchTree(10)
root.left = BinarySearchTree(8)
root.right = BinarySearchTree(15)

print(findClosestValueInBST(root , 7))

def findClosestValueInBSTByIterations(tree , target , closeset):
    currentNode = tree
    while currentNode is not None:
        if abs(target - closeset) > abs(target - currentNode.data):
            closeset = currentNode.data
        if target < currentNode.data:
            currentNode = currentNode.left
        elif target > currentNode.data:
            currentNode = currentNode.right
        else:
            break
    return closeset
print(findClosestValueInBSTByIterations(root, 7 , float("inf") ))