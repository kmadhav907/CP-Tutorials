class Solution:
    def multiply(self, num1: str, num2: str) -> str:
        num = ''
        a , b = 0 ,0
        t = 0
        for i in range (len(num1)):
            num = num1[i]
           
            a = a * 10 + ord(num) - ord('0')
            
        
        
        for i in range(len(num2)):
            num = num2[i]

            b = b * 10 + ord(num) - ord('0')
    
        return str(a*b)
