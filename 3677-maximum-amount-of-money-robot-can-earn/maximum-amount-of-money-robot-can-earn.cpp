class Solution {
public:
    int pp(int i,int j, int k,vector<vector<int>>& coins,vector<vector<vector<int>>>&dp,int m,int n){
        if(i>=m || j>=n){
            return INT_MIN;
        }
        int x = coins[i][j];

        if(i==m-1 && j== n-1){
            if(k>0)return max(x,0);
            return x;
        }

        int res = dp[i][j][k];
        if(res!=INT_MIN)return res;

        res = max(pp(i+1,j,k,coins,dp,m,n),pp(i,j+1,k,coins,dp,m,n))+x;

         if (k > 0 && x < 0) {
                res = max({res, pp(i + 1, j, k - 1,coins,dp,m,n), pp(i, j + 1, k - 1,coins,dp,m,n)});
            }
            return dp[i][j][k] = res;
        
    }

    int maximumAmount(vector<vector<int>>& coins) {
        int m = coins.size();
        int n = coins[0].size();
        vector<vector<vector<int>>>dp(m,(vector<vector<int>>(n,vector<int>(3,INT_MIN))));
        return pp(0,0,2,coins,dp,m,n); 
        
    }
};