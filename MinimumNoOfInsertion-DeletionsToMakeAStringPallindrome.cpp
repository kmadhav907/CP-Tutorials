class Solution {
public:
    int minInsertions(string s) {
        string rev = s;
        reverse(rev.begin(), rev.end());
        int n = s.length();
        int t[n+1][n+1];
        int i , j;
        for(i = 0; i<n+1; i++){
            for(j = 0; j < n+1; j++){
                if(i == 0 || j == 0){
                    t[i][j] = 0;
                }
            }
            
        }
        for(i = 1; i <n+1; i++){
            for(j = 1; j < n+1; j++){
                if(s[i-1] == rev[j-1]){
                    t[i][j] = t[i-1][j-1]+1;
                }
                else {
                    t[i][j] = max(t[i-1][j], t[i][j-1]);
                }
            }
        }
        return n - t[n][n];
    }
};
