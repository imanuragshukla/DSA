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
    int pp(TreeNode* root,int &a){
        if(!root)return 0;
        int lh = max(0, pp(root->left,a));
        int rh = max(0,pp(root->right,a));
        a = max(a,root->val+lh+rh);
        return root->val+max(lh,rh);
    }
    int maxPathSum(TreeNode* root) {
        if(!root)return 0;
        int c = INT_MIN;
        pp(root,c);
        return c;

    }
};