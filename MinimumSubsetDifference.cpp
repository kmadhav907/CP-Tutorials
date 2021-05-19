class Solution {
public:
    int min(int a , int b){
        if(a>b){
            return b;
        }
        else{
            return a;
        }
    }
    int lastStoneWeightII(vector<int>& stones) {
        vector<int> selections;
        int n = stones.size();
        long sum = 0;
        for(int x:stones){
            sum += x;
        }
        bool t[n+1][sum+1];
             for(int i=0;i<=n;i++) {
            for(int j=0;j<=sum;j++){
                if(i==0) t[i][j] = 0;
                if(j==0) t[i][j] = 1;
            }
        }
        for(int i=1; i< n+1; i++){
            for(int j =1; j < sum+1; j++){
                if(stones[i-1] <= j){
                    t[i][j] = t[i-1][j-stones[i-1]] || t[i-1][j];
                }
              else{
                    t[i][j] = t[i-1][j];
                }
            }
        }
        for(int i = 0 ;i<= sum/2 ; i++){
            if(t[n][i] == true){
                selections.push_back(i);
            }
        }
        int minimum = INT_MAX;
        for(int i = 0 ; i <selections.size();i++){
            minimum = min(minimum, sum - (2 * selections[i]));
        }
        return minimum;
        
    }
};
