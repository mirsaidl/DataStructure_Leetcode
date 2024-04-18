class Solution:
    def majorityElement(self, nums: list[int]) -> int:
        sets = list(set(nums))
        maxs, number = 0, 0
        for num in sets:
            if nums.count(num) > maxs:
                maxs = nums.count(num)
                number = num
                
        return number