class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        bool s = next_permutation(nums.begin(), nums.end());
        if (!s){
            return ;
        }
        
    }
};