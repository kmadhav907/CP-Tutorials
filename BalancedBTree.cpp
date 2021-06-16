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
class Solution {
    int heightOfTree(TreeNode* root){
        if(!root){
            return 0;
        }
        int lh = heightOfTree(root->left);
        int rh = heightOfTree(root-> right);
        int dif = abs(lh - rh);
        if(lh==-1 || rh == -1 || dif > 1){
            return -1;
        }
        else {
            return max(lh, rh) + 1;
        }
    }
public:
    bool isBalanced(TreeNode* root) {
     int height = heightOfTree(root);   
    if(height == -1){
        return false;
    }
        return true;
    }
};
