class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        queue<pair<int,int>>q;
        int cnt =0;
        int good =0;
       
        vector<vector<int>> vis(m,vector<int>(n,0));


        for(int i =0;i<m;i++){
            for(int j =0;j<n;j++){
                if(grid[i][j]==2){q.push({i,j});vis[i][j]=1;}
                
                if(grid[i][j]==1)good++;
            }}

    if(good==0)return 0;
                while(!q.empty()){
                    int n1 = q.size();
                    cnt++;

                    for(int kk =0;kk<n1;kk++){
                        pair<int,int>p = q.front();
                        q.pop();
                        int a = p.first;
                        int b = p.second;
                        if(b>0 && grid[a][b-1]!=0){
                            if(!vis[a][b-1]){
                            if(grid[a][b-1]==1){grid[a][b-1]=2;  q.push({a,b-1});}
                           
                            vis[a][b-1]=1;
                        }
                        }
                        if(b<n-1 && grid[a][b+1]!=0){
                            if(!vis[a][b+1]){
                            if(grid[a][b+1]==1){;grid[a][b+1]=2; q.push({a,b+1});}
                           
                            vis[a][b+1]=1;
                        }
                        }
                       if(a>0 && grid[a-1][b]!=0){
                            if(!vis[a-1][b]){
                            if(grid[a-1][b]==1){grid[a-1][b]=2;q.push({a-1,b});}
                            
                            vis[a-1][b]=1;
                        }
                        }
                        if(a<m-1 && grid[a+1][b]!=0){
                            if(!vis[a+1][b]){
                            if(grid[a+1][b]==1){grid[a+1][b]=2; q.push({a+1,b});}
                           
                            vis[a+1][b]=1;
                        }
                        }
                    }
                   // if(pan==1){
                       // cnt++;
                       // pan=0;
                    }
                
            
        
         for(int i =0;i<m;i++){
            for(int j =0;j<n;j++){
                if(grid[i][j]==1)return -1;}}
                return cnt-1;

    }
};