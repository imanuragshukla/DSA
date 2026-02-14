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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        map<int,int> m;
        for(int i=0;i<inorder.size();i++){
            m[inorder[i]]=i;
        }
        TreeNode* root = build(inorder,0,inorder.size()-1,postorder,0,postorder.size()-1,m);
        return root;
    }

    TreeNode* build(vector<int>&inorder,int instart,int inend,vector<int>&postorder,int postart,int poend,map<int,int>&m){
        if(instart>inend || postart>poend)return NULL;
        TreeNode* root = new TreeNode(postorder[poend]);
        int a = m[root->val];
        int a1 = a-instart;
        root->left = build(inorder, instart, a-1,
                       postorder, postart, postart + a1 - 1, m);

    root->right = build(inorder, a+1, inend,
                        postorder, postart + a1, poend - 1, m);

        return root;
    }
};