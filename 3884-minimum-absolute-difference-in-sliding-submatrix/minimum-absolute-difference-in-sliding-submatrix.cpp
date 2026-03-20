class Solution {
public:
    vector<vector<int>> minAbsDiff(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>>ans(m-k+1,vector<int>(n-k+1));
        
        for(int i=0;i<(m-k+1);i++){
            for(int j =0;j<(n-k+1);j++){
                vector<int>temp;
                for(int i1=i;i1<(i+k);i1++){
                   for(int j1=j;j1<(j+k);j1++){
                  temp.push_back(grid[i1][j1]);
            }
            }
             if (k == 1) {
                    ans[i][j] = 0;
                    continue;
                }

                sort(temp.begin(), temp.end());
                temp.erase(unique(temp.begin(), temp.end()), temp.end());

                if (temp.size() <= 1) {
                    ans[i][j] = 0;
                    continue;
                }

                int mini = INT_MAX;
                for (int p = 1; p < temp.size(); p++) {
                    mini = min(mini, abs(temp[p] - temp[p - 1]));
                }

                ans[i][j] = mini;
        }
        }

        return ans;
    

    }
};