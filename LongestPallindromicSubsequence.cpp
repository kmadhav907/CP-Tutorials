class Solution {
public:
    int longestPalindromeSubseq(string s) {
        string r = s;
        reverse(r.begin(), r.end());
        int n = s.length();
        int t[n+1][n+1];
        int i, j;
        for(i = 0; i <n+1; i++){
            for(j =0; j < n+1; j++){
                if(i == 0 || j == 0){
                    t[i][j] = 0;
                }
            }
        }
        for(i = 1; i < n+1; i++){
            for(j=1; j < n+1; j++){
                if(r[i-1] == s[j-1]){
                    t[i][j] = t[i-1][j-1] + 1;
                }else {
                    t[i][j] = max(t[i-1][j], t[i][j-1]);
                }
            }
        }
        return t[n][n];
    }
};
