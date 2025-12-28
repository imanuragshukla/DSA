class Solution {
public:
    int minAllOneMultiple(int k) {
        int cnt =1;
        int j = 1;
        unordered_map<int,int>m;
        while(true){
           cnt++;
           j= j*10+1;
           j = j%k;
           if(j==0)return cnt;
           if(m[j]==1)break;
           m[j]=1;
        }
        return -1;
    }
};