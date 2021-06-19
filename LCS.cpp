// Recursive Approach of LCS TimeComplexity is O(2^n)
class Solution {
public:
    int LCS(string X , string Y, int n, int m ){
     if(m==0 || n==0)
            return 0;
   if(X[n-1]==Y[m-1])
            return 1 + LCS(X,Y,m-1,n-1);
     else return max(LCS(X,Y,m,n-1),LCS(X,Y,m-1,n));
    }
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.size();
        int m = text2.size();
        return LCS(text1, text2, n , m);
    }
};
