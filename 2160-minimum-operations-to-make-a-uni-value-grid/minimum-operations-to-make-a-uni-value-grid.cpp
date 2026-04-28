class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int>ans;
        int aa = grid[0][0]%x;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]%x!=aa)return -1;
                ans.push_back(grid[i][j]);
            }
        }
        sort(ans.begin(),ans.end());
        int n = ans.size();
        int anss =0;
        for(int i=0;i<n;i++){
            anss+=(abs(ans[i]-ans[n/2]))/x;
        }
        return anss;
    }
};