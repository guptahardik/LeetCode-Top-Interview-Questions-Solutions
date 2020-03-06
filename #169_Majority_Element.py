'''
Given an array of size n, find the majority element. The majority element is the element that appears more than ⌊ n/2 ⌋ times.

You may assume that the array is non-empty and the majority element always exist in the array.

Example 1:

Input: [3,2,3]
Output: 3
Example 2:

Input: [2,2,1,1,1,2,2]
Output: 2

Runtime: 164 ms, faster than 97.77% of Python3 online submissions for Majority Element.
Memory Usage: 14 MB, less than 100.00% of Python3 online submissions for Majority Element.

'''

import math
class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        nums.sort()
        return nums[math.floor((len(nums)/2))]
