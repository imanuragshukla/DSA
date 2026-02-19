class Solution {
public:
    void dfs(vector<vector<int>>adj,vector<int>&vis,int i){
        vis[i]=1;
        for(auto it:adj[i]){
            if(!vis[it]){
                vis[it]=1;
                dfs(adj,vis,it);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<vector<int>> adj(n);
        
        for(int i=0;i<isConnected.size();i++){
            for(int j=0;j<isConnected[i].size();j++){
                if(i==j)continue;
                if(isConnected[i][j]==1){
                adj[i].push_back(j);
                //adj[j].push_back(i);
                }
            }
        }
        vector<int> vis(n,0);
        int cnt =0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                cnt++;
                dfs(adj,vis,i);
            }
        }
        return cnt;
    }
};