class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        if target in nums:
            i = nums.index(target)
            j = nums[::-1].index(target)
            return [i , len(nums) - j  -1]
        else:
            return [-1 , -1]
