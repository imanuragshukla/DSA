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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ansi;
        if(!root)return ansi;
        queue<TreeNode*>st;
        st.push(root);
        int ii =0;
        while(!st.empty()){
            int m = st.size();
            vector<int>ans;
            for(int i =0;i<m;i++){
                TreeNode* temp = st.front();
                ans.push_back(temp->val);
                st.pop();
                if(temp->left)st.push(temp->left);
                if(temp->right)st.push(temp->right);
                
                
            }
            if(ii%2==0)ansi.push_back(ans);
            else{
                reverse(ans.begin(),ans.end());
                ansi.push_back(ans);
            }
            ii++;
        }
        return ansi;
    }
};