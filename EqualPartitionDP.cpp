class Solution {
public:
    bool canPartition(vector<int>& nums) {
        long n = nums.size();
        long i , j;
        long sum = 0;
        for(int x:nums){
            sum += x;
        }
        if(sum%2 != 0){
            return false;
        }
        sum = sum/2;
        bool dp[n+1][sum+1];
        for(i = 0; i < n +1; i++){
            for(j = 0 ;j < sum + 1; j++){
                if(i == 0){
                dp[i][j] = false;     
                }
                if(j == 0){
                    dp[i][j] = true;
                }
                
            }
        }
        for(i = 1 ; i < n+ 1; i++){
            for(j = 1; j < sum+ 1; j++){
                if(nums[i -1] <= j){
                    dp[i][j] = dp[i-1][j - nums[i -1]] || dp[i-1][j];
                    
                }
                else {
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
            return dp[n][sum];
        
    }
};
