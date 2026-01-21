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
    bool pp(TreeNode*root,TreeNode*subRoot){
        if(root==NULL || subRoot==NULL)return root == subRoot;
        return (root->val==subRoot->val && pp(root->left,subRoot->left) && pp(root->right,subRoot->right));
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root==NULL || subRoot==NULL)return root == subRoot;
        bool flag;
        if(root->val== subRoot->val){
            flag = pp(root,subRoot);
        }
        return (flag || isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot));
    }
};