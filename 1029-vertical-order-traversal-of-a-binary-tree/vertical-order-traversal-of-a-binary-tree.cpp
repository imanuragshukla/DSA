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
    map<int, map<int, vector<int>>> nodes;
    void pp(TreeNode*root,int l,int r){
        if(!root)return;
        nodes[l][r].push_back(root->val);
        pp(root->left,l-1,r+1);
        pp(root->right,l+1,r+1);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
       if(!root)return {};
       pp(root,0,0);
       vector<vector<int>>ans;

       for(auto &p :nodes){
        vector<int>col;
        for(auto& row : p.second){
            sort(row.second.begin(),row.second.end());
            for(int v: row.second){
                col.push_back(v);
            }
        }
        ans.push_back(col);
       }
       return ans;
    }
};