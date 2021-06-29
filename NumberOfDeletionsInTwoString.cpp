class Solution {
public:
    int helper(string &word1, string &word2){
        int m = word1.length();
        int n = word2.length();
        int t[m+1][n+1];
        int i, j;
        for(i = 0 ; i<m+1; i++){
            for(j = 0 ; j<n+1; j++){
                if(i==0 || j ==0){
                    t[i][j] = 0;
                }
            }
        }
        for(i = 1;  i<m+1; i++){
            for(j = 1; j < n+1; j++){
                if(word1[i-1] == word2[j-1]){
                    t[i][j] = t[i-1][j-1]+1;
                    
                }
                else {
                    t[i][j] = max(t[i][j-1], t[i-1][j]);
                }
            }
        }
        return t[m][n];
    }
    int minDistance(string word1, string word2) {
        int lcs = helper(word1 , word2);
        return word1.length() + word2.length() - (2 * lcs);
    }
};
