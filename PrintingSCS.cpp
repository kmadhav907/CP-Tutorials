class Solution {
public:
    string shortestCommonSupersequence(string str1, string str2) {
        int  m = str1.length();
        int n = str2.length();
        int t[m+1][n+1];
        int i , j;
        for(i=0; i<m+1; i++){
            for(j = 0; j < n+1; j++){
                if(i == 0 || j == 0){
                    t[i][j] = 0;
                }
            }
            
        }
        for(i = 1 ; i < m+1; i++){
            for(j = 1; j < n+1; j++){
                if(str1[i-1] == str2[j-1]){
                    t[i][j] = t[i-1][j-1]+1;
                }
                else {
                    t[i][j] = max(t[i-1][j], t[i][j-1]);
                }
            }
        }
       
        string res = "";
        while(i > 0 && j > 0){
            if(str1[i-1] == str2[j-1]){
                res.push_back(str1[i-1]);
                i--;
                j--;
            }
            else if(t[i-1][j] > t[i][j-1]){
                    res.push_back(str1[i-1]);
                    i--;
                }
                else {
                    res.push_back(str2[j-1]);
                    j--;
                }
            
        }
        while(i > 0){
            res.push_back(str1[i-1]);
            i--;
        }
        while(j > 0){
            res.push_back(str2[j-1]);
            j--;
        }
     reverse(res.begin(), res.end());
    res.pop_back(); // last minute juggad
    return res; 
    }
};
