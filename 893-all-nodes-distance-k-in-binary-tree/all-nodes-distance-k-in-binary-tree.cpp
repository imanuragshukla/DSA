/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        queue<TreeNode*>q;
        unordered_map<TreeNode*,TreeNode*>m;
        q.push(root);
        while(!q.empty()){
            TreeNode* temp = q.front();
            q.pop();
            if(temp->left){
                m[temp->left]=temp;
                q.push(temp->left);
            }
             if(temp->right){
                m[temp->right]=temp;
                q.push(temp->right);
            }
        }
        unordered_map<TreeNode*,bool>m1;
        queue<TreeNode*>q1;
        q1.push(target);
        int level =0;
        m1[target]=true;
        while(!q1.empty()){
            int n = q1.size();
            if(level++==k)break;
            for(int i=0;i<n;i++){
                TreeNode* curr = q1.front();
                q1.pop();
                if(curr->left && !m1[curr->left]){
                    q1.push(curr->left);
                    m1[curr->left]=true;
                }
                if(curr->right && !m1[curr->right]){
                    q1.push(curr->right);
                    m1[curr->right]=true;
                }
                if(m[curr] && !m1[m[curr]]){
                    q1.push(m[curr]);
                    m1[m[curr]]=true;
                }
            }
        }
        vector<int>res;
        while(!q1.empty()){
            TreeNode* temp = q1.front();
            q1.pop();
            res.push_back(temp->val);
        }
        return res;
    }
};