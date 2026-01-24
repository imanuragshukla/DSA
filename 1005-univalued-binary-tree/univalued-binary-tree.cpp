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
    bool pp(TreeNode*root,int a){
        if(!root)return true;

        return (root->val== a && pp(root->left,a) && pp(root->right,a));
    }
    bool isUnivalTree(TreeNode* root) {
        if(!root)return true;
        int a = root->val;
        return pp(root,a);
    }
};