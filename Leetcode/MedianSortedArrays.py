class Solution:
    def findMedianSortedArrays(self, nums1: list[int], nums2: list[int]) -> float:
        al = nums1 + nums2
        al = sorted(al)
        low = 0
        high = len(al) - 1
        mid = (low + high) / 2

        if mid.is_integer():
            median = al[int(mid)]
            return median
        else:
            mid = int(mid)
            median = (al[mid] + al[mid+1]) / 2
            return median