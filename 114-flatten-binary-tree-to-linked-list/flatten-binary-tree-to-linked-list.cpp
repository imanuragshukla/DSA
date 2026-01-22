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
    void pre(vector<int>&ans,TreeNode* root){
        if(!root)return;
        
       ans.push_back(root->val);
        pre(ans,root->left);
        pre(ans,root->right);
    
        
        
    }
    void flatten(TreeNode* root) {
        if(!root)return;
        vector<int>ans;
        pre(ans,root);
        root->left = NULL;
        TreeNode* y = root;
        for(int i =1;i<ans.size();i++){
            TreeNode* temp1 = new TreeNode(ans[i]);
            y->right = temp1;
            y = temp1;
        }

        
    }
};