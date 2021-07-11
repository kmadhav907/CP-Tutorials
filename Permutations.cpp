class Solution {
public:
    vector<vector<int>> res;
    void backTrack(vector<int> &cur , vector<int>nums){
        if(cur.size() == nums.size()){
            res.push_back(cur);
        }
        for(int i = 0 ; i < nums.size(); i++){
            if(find(cur.begin() , cur.end() , nums[i])!= cur.end()){
                continue;
            }
            cur.push_back(nums[i]);
            backTrack(cur , nums);
            cur.pop_back();
            
            
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> cur;
        backTrack(cur , nums);
        return res;
    }
};
