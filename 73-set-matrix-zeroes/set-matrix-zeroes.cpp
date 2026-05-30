class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
       unordered_map<int,int> a,b;
       int m = matrix.size();
       int n = matrix[0].size();
       for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j]==0){
                a[i]=1;
                b[j]=1;
            }
        }
       }

       for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(a.find(i)== a.end() && b.find(j)== b.end())continue;
            else{
                matrix[i][j]=0;
            }
        }
       }
       

    }
};