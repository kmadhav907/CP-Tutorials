class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int q = nums.size();
        for(int i = 0; i < q ; i++){
            int r = nums[i];
            int b = nums[nums[i]] % q;
            nums[i] = (q * b) + r;
        }
        for(int i = 0; i < q ; i++){
            nums[i] = nums[i]/q;
        }
        return nums;
    }
};
