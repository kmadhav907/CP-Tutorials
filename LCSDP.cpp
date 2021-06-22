class Solution {
public:

    int longestCommonSubsequence(string text1, string text2) {
        int m = text1.size();
        int n = text2.size();
        int i , j;
        int t[m+1][n+1];
        for(i=0; i< m+1; i++){
            for(j=0; j < n+1; j++){
            if(i==0 || j == 0)
                t[i][j] = 0;
            }
        }
        for(i=1; i< m+1; i++){
            for(j =1; j< n+1; j++){
                if(text1[i-1] == text2[j-1])
                    t[i][j] = t[i-1][j-1] + 1;
                else 
                    t[i][j] = max(t[i-1][j], t[i][j-1]);
            }
            
        }
        return t[m][n];
    }
};
