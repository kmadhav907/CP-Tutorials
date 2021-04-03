/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
typedef long long ll;
class Solution {
public:
    ll findTilt(TreeNode* root) {
        ll sum = 0;
        if(!root){
            return 0;
        }
        helper(root , sum);
        return sum;
        
        
    }
    ll helper(TreeNode* root, ll &sum){
        if (!root){
            return 0;
        }
        ll a = helper(root->left, sum);
        ll b = helper(root->right , sum);
        ll data = abs(a - b);
        sum = sum + data;
        ll temp = a + b + root->val;
        return temp;
    }
};
