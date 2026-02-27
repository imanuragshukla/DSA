class Solution {
public:
    int numWaterBottles(int nB, int nE) {
        int ans = nB;
        int a = nB;
        while(a>=nE){
            int aa = a/nE;
            int bb = a%nE;
            ans+=aa;
            a = aa+bb;
        }
        return ans;
    }
};