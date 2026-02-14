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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int,int>m;
        for(int i =0;i<inorder.size();i++){
            m[inorder[i]]=i;
        }
        TreeNode* root = build(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1,m);
        return root;
    }
    TreeNode* build(vector<int>&preorder,int i1,int j1,vector<int>&inorder,int i2,int j2,map<int,int>&m){
        if(i1>j1|| i2>j2)return NULL;
        TreeNode* root = new TreeNode(preorder[i1]);

        int a1 = m[root->val];
        int rem = a1 - i2;
        root->left = build(preorder,i1+1,i1+rem,inorder,i2,j2-1,m);
        root->right = build(preorder,i1+rem+1,j1,inorder,a1+1,j2,m);
        return root;
    }

};