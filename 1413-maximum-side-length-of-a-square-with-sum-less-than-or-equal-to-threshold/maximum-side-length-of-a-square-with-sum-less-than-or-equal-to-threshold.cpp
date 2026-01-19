class Solution {
public:
    int maxSideLength(vector<vector<int>>& grid, int threshold) {

    int m = grid.size();
    int n = grid[0].size();

    // row prefix (you already had this)
    vector<vector<int>> rowSum(m, vector<int>(n + 1, 0));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            rowSum[i][j + 1] = rowSum[i][j] + grid[i][j];
        }
    }

    int maxi = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {

            for (int k = 0; i - k >= 0 && j - k >= 0; k++) {

                int x1 = i - k;
                int y1 = j - k;
                int size = k + 1;

                int sum = 0;

               
                for (int r = x1; r <= i; r++) {
                    sum += rowSum[r][j + 1] - rowSum[r][y1];
                }

                if (sum <= threshold) {
                    maxi = max(maxi, size);
                }
                else{
                    break;
                }
            }
        }
    }

    return maxi;
}

};
    