class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int m = image.size();
        int n = image[0].size();
        int a1 = image[sr][sc];
        vector<vector<int>>vis(m,vector<int>(n,0));
        queue<pair<int,int>>q;
        q.push({sr,sc});
        image[sr][sc]=color;
        vis[sr][sc]=1;
        while(!q.empty()){
            pair<int,int>p = q.front();
            q.pop();
            int a = p.first;
            int b = p.second;
            if(b>0 && image[a][b-1]==a1){
                if(!vis[a][b-1]){
                    vis[a][b-1]=1;
                    image[a][b-1]=color;
                    q.push({a,b-1});
                }
            }
            if(a>0 && image[a-1][b]==a1){
                if(!vis[a-1][b]){
                    vis[a-1][b]=1;
                    image[a-1][b]=color;
                    q.push({a-1,b});
                }
            }
            if(b<n-1 && image[a][b+1]==a1){
                if(!vis[a][b+1]){
                    vis[a][b+1]=1;
                    image[a][b+1]=color;
                    q.push({a,b+1});

                }
            }
            if(a<m-1 && image[a+1][b]==a1){
                if(!vis[a+1][b]){
                    vis[a+1][b]=1;
                    image[a+1][b]=color;
                    q.push({a+1,b});
                }
            }
        }
        return image;
    }
};