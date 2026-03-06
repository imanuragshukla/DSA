class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n= graph.size();
        vector<int>v(n,-1);
        for(int j=0;j<n;j++){
            if(v[j]!=-1)continue;
        queue<int>q;
        
        q.push(j);
        v[j]=0;
        while(!q.empty()){
            int x = q.front();
            q.pop();
            for(int i=0;i<graph[x].size();i++){
                if(v[graph[x][i]]==-1){
                    q.push(graph[x][i]);
                    int pp = v[x];
                    pp = pp^1;
                    v[graph[x][i]]=pp;
                }
                else{
                    if(v[graph[x][i]]==v[x] )return false;
                }
            }
        }
        }
        return true;
    }
};