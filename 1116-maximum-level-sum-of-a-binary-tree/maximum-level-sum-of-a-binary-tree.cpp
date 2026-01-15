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
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        int maxi = INT_MIN;
        int ansi = 0;
        int i = 1;
        while(!q.empty()){
            int n = q.size();
            int ans =0;
            for(int i =0;i<n;i++){
                TreeNode* temp = q.front();
                q.pop();
                ans+=temp->val;
                if(temp->left)q.push(temp->left);
                if(temp->right)q.push(temp->right);
            }
            if(ans>maxi){
                maxi = ans;
                ansi = i;
            }
            i++;

        }
        return ansi;
    }
};