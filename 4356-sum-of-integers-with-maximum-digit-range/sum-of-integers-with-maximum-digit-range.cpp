class Solution {
public:
    int cc(int n){
        int mini = INT_MAX;
        int maxi = INT_MIN;
        while(n){
            int a = n%10;
            mini = min(mini,a);
            maxi = max(maxi,a);
            n/=10;
        }
        return maxi-mini;
    }
    int maxDigitRange(vector<int>& nums) {
        vector<int>v(10,0);
        for(int i=0;i<nums.size();i++){
            int aa = cc(nums[i]);
            int ss = v[aa];
            ss+=nums[i];
            v[aa]=ss;
        }
        for(int i=9;i>=0;i--){
            if(v[i]>0)return v[i];
        }
        return 0;
    }
};