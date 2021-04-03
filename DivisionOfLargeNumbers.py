import math
class Solution:
    def divide(self, dividend: int, divisor: int) -> int:
        negative = False
        if (dividend < 0 and divisor > 0) or (dividend > 0 and divisor < 0):
            negative = True
        res = math.floor(abs(dividend/divisor))
        if negative:
            res = -res
        if res < -2 ** 31:
            res = -2 ** 31 
        elif res > 2 ** 31 -1:
            res = 2 ** 31 - 1
       
            
        return res
