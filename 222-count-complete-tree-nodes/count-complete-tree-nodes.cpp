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
    int countNodes(TreeNode* root) {
    if (!root) return 0;

    int level = 0;
    TreeNode* temp = root;
    while (temp) {
        level++;
        temp = temp->left;
    }

    int low = 0;
    int high = (1 << (level - 1)) - 1;
    int lastCount = 0;

    while (low <= high) {
        int mid = (low + high) / 2;
        TreeNode* cur = root;
        int idx = mid;

        for (int d = level - 1; d > 0; d--) {
            int half = 1 << (d - 1);
            if (idx >= half) {
                cur = cur->right;
                idx -= half;
            } else {
                cur = cur->left;
            }
        }

        if (cur) {
            lastCount = mid + 1;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return (1 << (level - 1)) - 1 + lastCount;
}


};