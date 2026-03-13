class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& p) {
        vector<vector<int>> adj(n);
        vector<int>ind(n,0);
        for(int i=0;i<p.size();i++){
            adj[p[i][1]].push_back(p[i][0]);
            ind[p[i][0]]++;
        }
        queue<int>q;
        for(int i=0;i<n;i++){
            if(ind[i]==0)q.push(i);
        }
        int cnt=0;
        while(!q.empty()){
            cnt++;
            int node = q.front();
            q.pop();
             for (int next : adj[node]) {
                ind[next]--;
                if (ind[next] == 0) q.push(next);
            }
        }

        return cnt == n;

    }
};