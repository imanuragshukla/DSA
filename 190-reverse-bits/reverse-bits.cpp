class Solution {
public:
    int reverseBits(int n) {
        int ans =0;
        int pp = n;
        for(int i = 31;i>=0;i--){
            int aa = pp&1;
            pp>>=1;
            if(aa==1)ans+=pow(2,i);   
        }
        return ans;
    }
};