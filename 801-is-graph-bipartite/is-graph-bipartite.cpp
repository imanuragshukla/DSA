class Solution {
public:
    bool dfs(vector<vector<int>>&adj,vector<int>&vis,int curr,int p){
        vis[curr]=p;
        for(int i=0;i<adj[curr].size();i++){
            if(vis[adj[curr][i]]==-1){
                if(dfs(adj,vis,adj[curr][i],!p)==false)return false;
            }
            else if(vis[adj[curr][i]] == p)return false;
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<vector<int>>adj(n,vector<int>());
        vector<int>vis(n,-1);
       for(int i=0;i<n;i++){
    for(int j=0;j<graph[i].size();j++){   
        adj[i].push_back(graph[i][j]);
        adj[graph[i][j]].push_back(i);
    }
}
        for(int i=0;i<n;i++){
            if(vis[i]==-1){
                if(dfs(adj,vis,i,0)==false)return false;
            }
        }
        return true;
    }
};