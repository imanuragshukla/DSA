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
    bool isLeaf(TreeNode* root){
        if(root->left == NULL && root->right ==NULL)return true;
        return false;
    }
    

    void pp(TreeNode* root ,string s, int &p){
        if(!root)return ;

        s.push_back(root->val + '0');
        if(isLeaf(root)){
            int aa = std::stoi(s, nullptr, 2);
            p+=aa;
            
        }
        pp(root->left,s,p);
        
        pp(root->right,s,p);
        
    }


    int sumRootToLeaf(TreeNode* root) {
        int ans =0;
        string s= "";
        pp(root,s,ans);
        return ans;
    }
};