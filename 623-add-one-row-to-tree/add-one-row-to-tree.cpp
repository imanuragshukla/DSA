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
    void pp1(TreeNode* root,int val,int depth,int i){
        if(root==NULL)return;
        if(i==depth){
            TreeNode* left = root->left;
            TreeNode* right = root->right;
            TreeNode* ne = new TreeNode(val);
            TreeNode* ne1 = new TreeNode(val);
            root->left = ne;
            root->right = ne1;
            ne->left = left;
            ne1->right = right;
        }
        pp1(root->left,val,depth,i+1);
        pp1(root->right,val,depth,i+1);
    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1){
        TreeNode* temp = new TreeNode(val);
        temp->left = root;
        return temp;}
        pp1(root,val,depth,2);
        return root;

    }
};