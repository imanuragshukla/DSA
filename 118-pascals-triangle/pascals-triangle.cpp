class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>>v;
        for(int i=0;i<n;i++){
            vector<int>v1;
            for(int j=0;j<=i;j++){
                if(j==0 || j==i)v1.push_back(1);
                else{
                    int ns= v[i-1][j]+v[i-1][j-1];
                    v1.push_back(ns);
                }
            }
            v.push_back(v1);
        }

        return v;

    }
};