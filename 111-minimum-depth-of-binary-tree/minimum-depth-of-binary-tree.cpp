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
    int pp(TreeNode*root){
        if(!root)return 0;
        
        if(root->left==NULL)return 1+pp(root->right);
        if(root->right==NULL)return 1+pp(root->left);
        return 1+min(pp(root->left),pp(root->right));
    }
    int minDepth(TreeNode* root) {
      
       return pp(root);
       
    }
};