class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        int t[m+1][n+1];
        int i , j;
        for(i = 0 ; i<m+1; i++){
            for(j = 0; j <n+1; j++){
                if(i==0 || j ==0){
                    t[i][j] = 0;
                }
            }
        }
        int ans = 0;
        for(i = 1; i < m+1; i++){
            for(j = 1; j < n+1; j++){
                if(nums1[i-1] == nums2[j-1]){
                    t[i][j] = 1+t[i-1][j-1];
                    ans = max(ans , t[i][j]);
                }
                else {
                    t[i][j] = 0;
                }
            }
        }
        return ans;
    }
};
