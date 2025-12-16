class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int a=0;
        int b =0;
        for(int i :position){
            if(i%2)a++;
            else(b++);
        }
        return min(a,b);
    }
};