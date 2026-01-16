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
    int widthOfBinaryTree(TreeNode* root) {
        if(root == NULL) return 0;

        queue<pair<TreeNode*, long long>> q;
        q.push({root, 0});
        long long maxi = 0;

        while(!q.empty()) {
            int n = q.size();
            long long mini = q.front().second; // normalize
            long long a = 0, b = 0;

            for(int i = 0; i < n; i++) {
                auto p = q.front();
                q.pop();

                TreeNode* temp = p.first;
                long long idx = p.second - mini;

                if(i == 0) a = idx;
                if(i == n - 1) b = idx;

                if(temp->left)
                    q.push({temp->left, 2 * idx + 1});

                if(temp->right)
                    q.push({temp->right, 2 * idx + 2});
            }

            maxi = max(maxi, b - a + 1);
        }

        return maxi;
    }
};
