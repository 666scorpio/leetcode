# Input: nums = [1,2,3,4,5,6,7], k = 3
# Output: [5,6,7,1,2,3,4]
from typing import List


class Solution:
    def copy(self, nums: List[int]):
        i = len(nums) - 1
        while i > 0:
            nums[i] = nums[i - 1]
            i -= 1

    def rotate(self, nums: List[int], k: int) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        i: int = 0
        l: int = len(nums)
        while i < k:
            c: int = nums[l - 1]
            self.copy(nums)
            nums[0] = c
            i += 1