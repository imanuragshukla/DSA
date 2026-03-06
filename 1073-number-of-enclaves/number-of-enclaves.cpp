class Solution {
public:
    int numEnclaves(vector<vector<int>>& board) {
        int m = board.size();
        int n = board[0].size();
        vector<vector<int>>ans(m,vector<int>(n,-1));
        queue<pair<int,int>>q;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==1){
                    board[i][j]= -1;
                    ans[i][j]=0;
                    if(i==0 || i==m-1 || j==0 || j==n-1)q.push({i,j});
                }
            }
        }
        while(!q.empty()){
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            ans[x][y]=1;
            board[x][y]=1;
            if(x>0 && ans[x-1][y]==0){
                ans[x-1][y] = 1;
                q.push({x-1,y});
            }
            if(x<m-1 && ans[x+1][y]==0){
                ans[x+1][y] = 1;
                q.push({x+1,y});
            }
            if(y>0 && ans[x][y-1]==0){
                ans[x][y-1] = 1;
                q.push({x,y-1});
            }
            if(y<n-1 && ans[x][y+1]==0){
                ans[x][y+1] = 1;
                q.push({x,y+1});
            }
        }
        int cnt =0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==-1)cnt++;
            }}
            return cnt;
    }
};