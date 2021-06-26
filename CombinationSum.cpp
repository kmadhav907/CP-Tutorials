// Knapsack and DFS Traverasl

class Solution {
public:
    void dfs(int i ,vector<int> &temp, vector<vector<int>>&res, int total, int n, int target, vector<int>&candidates){
        if(total == target){
            res.push_back(temp);
            return;
        }
        if(i >= n || total > target){
            return;
        }
        temp.push_back(candidates[i]);
        dfs(i , temp, res , total + candidates[i] , n, target, candidates);
        temp.pop_back();
        dfs(i+1 , temp , res , total , n , target, candidates);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
         vector<vector<int>> res;
        vector<int> temp;
        int n = candidates.size();
        dfs(0, temp, res , 0, n, target, candidates );
        return res;
    }
};
