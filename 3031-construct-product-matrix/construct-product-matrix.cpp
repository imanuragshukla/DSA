class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        int MOD = 12345;
        
        int size = m * n;
        vector<int> arr(size);

        int k = 0;
        for(int i = 0; i < m; i++)
            for(int j = 0; j < n; j++)
                arr[k++] = grid[i][j] % MOD;

        vector<int> pre(size, 1);
        for(int i = 1; i < size; i++)
            pre[i] = (pre[i-1] * arr[i-1]) % MOD;

        vector<int> suf(size, 1);
        for(int i = size-2; i >= 0; i--)
            suf[i] = (suf[i+1] * arr[i+1]) % MOD;

        vector<vector<int>> ans(m, vector<int>(n));
        k = 0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                ans[i][j] = (pre[k] * suf[k]) % MOD;
                k++;
            }
        }

        return ans;
    }
};