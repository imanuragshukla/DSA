class Solution {
public:
    int minElement(vector<int>& nums) {
        int ans = INT_MAX;
        for(int i:nums){
            int a = i;
            int sum =0;
            while(a){
                sum+=a%10;
                a/=10;
            }
            ans = min(ans,sum);
        }
        return ans;
    }
};