class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        unordered_map<int,int>m1,m2;
        for(int i=0;i<mat.size();i++){
            for(int j =0;j<mat[0].size();j++){
                if(mat[i][j]==1){
                    m1[i]++;
                    m2[j]++;
                }
            }
        }
        int cnt =0;
        for(int i=0;i<mat.size();i++){
            for(int j =0;j<mat[0].size();j++){
                if(mat[i][j]==1){
                   if(m1[i]==1 && m2[j]==1)cnt++;
                }
            }
        }
        return cnt;
        

    }
};