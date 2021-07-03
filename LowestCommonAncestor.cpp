/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* LCA(TreeNode* root , TreeNode* p , TreeNode* q , bool &v1 , bool &v2){
        if(!root) return NULL;
        
        if(root->val == p->val){
            v1 = true;
            return root;
            }
        if(root->val == q->val){
            v2 = true;
            return root;
        }
        TreeNode* leftNode = LCA(root->left , p , q, v1, v2);
        TreeNode* rightNode = LCA(root->right , p , q ,v1 , v2);
        if(leftNode && rightNode) return root;
        return (leftNode != NULL)? leftNode : rightNode ;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        bool v1 = false, v2 = false;
        TreeNode* lcaNode = LCA(root, p , q , v1 , v2);

        return lcaNode;
        
    }
};
