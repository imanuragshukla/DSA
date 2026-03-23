class Solution {
public:
    int maxProductPath(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        const int MOD = 1e9 + 7;

        vector<vector<long long>> mx(m, vector<long long>(n));
        vector<vector<long long>> mn(m, vector<long long>(n));

        mx[m-1][n-1] = mn[m-1][n-1] = grid[m-1][n-1];

        for(int i = m-1; i >= 0; i--){
            for(int j = n-1; j >= 0; j--){
                if(i == m-1 && j == n-1) continue;

                long long maxi = LLONG_MIN;
                long long mini = LLONG_MAX;

                if(i + 1 < m){
                    long long a = grid[i][j] * mx[i+1][j];
                    long long b = grid[i][j] * mn[i+1][j];
                    maxi = max({maxi, a, b});
                    mini = min({mini, a, b});
                }

                if(j + 1 < n){
                    long long a = grid[i][j] * mx[i][j+1];
                    long long b = grid[i][j] * mn[i][j+1];
                    maxi = max({maxi, a, b});
                    mini = min({mini, a, b});
                }

                mx[i][j] = maxi;
                mn[i][j] = mini;
            }
        }

        if(mx[0][0] < 0) return -1;
        return mx[0][0] % MOD;
    }
};