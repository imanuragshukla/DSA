class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        unordered_map<long long,int>m1;
        vector<vector<long long>>ans(m,vector<long long>(n));
        for(int i=0;i<m;i++){
            for(int j =0;j<n;j++){
                if(i==0 && j==0){ans[i][j]= grid[i][j];m1[ans[i][j]]++;continue;}
                if(i==0){ans[i][j]= grid[i][j]+ans[i][j-1];m1[ans[i][j]]++;continue;}
                if(j==0){ans[i][j]= grid[i][j]+ans[i-1][j];m1[ans[i][j]]++;continue;}

                ans[i][j]=grid[i][j]+ans[i-1][j]+ans[i][j-1];
                ans[i][j]-=ans[i-1][j-1];
                m1[ans[i][j]]++;  
            }
        }
        long long total = ans[m-1][n-1];
        if(total%2)return false;
        return (m1.find(total/2)!=m1.end());
    }
};