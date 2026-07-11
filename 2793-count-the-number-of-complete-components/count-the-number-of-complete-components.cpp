class Solution {
public:
    void pp(vector<vector<int>>& edges, vector<vector<int>>& adj) {
        for (int i = 0; i < edges.size(); i++) {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
    }
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        int ans = 0;
        vector<int> vis(n, 0);
        vector<vector<int>> adj(n, vector<int>());
        pp(edges, adj);
        for (int i = 0; i < n; i++) {
            if (vis[i] == 1)
                continue;
            queue<int> q;
            q.push(i);
            vis[i] = 1;

            int vertices = 0;
            int edgesCount = 0;

            while (!q.empty()) {
                int node = q.front();
                q.pop();

                vertices++;

                for (int nei : adj[node]) {
                    edgesCount++;

                    if (!vis[nei]) {
                        vis[nei] = 1;
                        q.push(nei);
                    }
                }
            }

            edgesCount /= 2;

            if (edgesCount == vertices * (vertices - 1) / 2)
                ans++;
        }
        return ans;
    }
};