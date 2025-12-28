class Solution {
public:
    long long maximumScore(vector<int>& nums) {
        long long sum = 0;
        int mini = INT_MAX;
        int n = nums.size();
        vector<int>mm(n,0);
        for(int i = nums.size()-1;i>=0;i--){
            sum+=nums[i];
            mini = min(mini,nums[i]);
            mm[i]=mini;
        }
        long long maxi = LLONG_MIN;
        long long curr =0;
        for(int i =0 ;i<n-1;i++){
            curr+=nums[i];
            maxi = max(maxi, curr-mm[i+1]);
        }
        return maxi;
        
    }
};