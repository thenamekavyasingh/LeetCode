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
public:
    int currSum=0;
    void travelSum(TreeNode* root){
        if(root==NULL)
            return;
        if(root->right)
            travelSum(root->right);
        currSum+=root->val;
        root->val=currSum;
        if(root->left)
            travelSum(root->left);
    }
    TreeNode* bstToGst(TreeNode* root) {
        travelSum(root);
        return root;
    }
};