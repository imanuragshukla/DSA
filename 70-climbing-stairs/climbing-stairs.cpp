class Solution {
public:
    int climbStairs(int n) {
        if(n==1)return 1;
        if(n==2)return 2;
        int ans1=1;
        int ans2=2;
        for(int i=3;i<=n;i++){
            int pp = ans2;
            ans2+=ans1;
            ans1=pp;
        }
        return ans2;
    }
};