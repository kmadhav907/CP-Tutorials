class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        if len(strs) == 0:
            return ''
        output_string = strs[0]
        for i in range(1 , len(strs)):
            output_string = self.common_prefix(output_string , strs[i])
        return output_string
    def common_prefix(self,str1 , str2 ):
        n1 = len(str1)
        n2 = len(str2)
        i = 0
        j = 0
        res = ''
        while i <= n1 -1 and j <= n2 -1:
            if str1[i] != str2[j]:
                break
            else:
                res += str1[i]
                i += 1
                j +=1
        return res
            