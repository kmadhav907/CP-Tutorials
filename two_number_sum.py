arr = list(map(int , input().split()))
target = int(input())

def twoNumberSum(arr , target):
    for i in range(len(arr) - 1):
        firstNum = arr[i]
        for j in range(i+1,len(arr)):
            secondNum = arr[j]
            if firstNum + secondNum == target :
                return [firstNum , secondNum]
        
def twoNumberSumByHashMap(arr , target):
    nums = {

    }
    for num in arr:
        if target - num in nums:
            return [target - num , num]
        else:
            nums[num] = True
    return []

    def twoNumberSumBySort(arr ,target):
        arr.sort()
        left = 0
        right = len(arr) - 1
        while(left < right):
            currentSum = arr[left] + arr[right]
            if currentSum == target:
                return [arr[left], arr[right]]
            elif currentSum < targetSum:
                left += 1
            else:
                 right -=1
        return []