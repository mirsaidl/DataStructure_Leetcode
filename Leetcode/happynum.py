
class Solution:
    def isHappy(self, n: int) -> bool:
        l = []
        while True:
            n = str(n)
            string = [int(x) for x in n]
            sum = 0
            for item in string:
                sum = sum + pow(item, 2)
            if sum == 1:
                return True
            elif sum in l:
                return False
            l.append(sum)
            n = sum

ex = Solution()
bool = ex.isHappy(19)
print(bool)