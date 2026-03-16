class Solution {
public:
    int pp(vector<int>&nums,int i,int sum,vector<int>&dp){
        if(i>=nums.size())return 0;
        int sum1 =0;
        int sum2 =0;
        if(dp[i]!=-1)return dp[i];
        sum1 = nums[i]+pp(nums,i+2,sum,dp);
        sum2 = pp(nums,i+1,sum,dp);
        if(sum1>sum2)return dp[i]=sum1;
        else{
            return dp[i]=sum2;
        }
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
       vector<int>dp(n+1,-1);
      int ans = pp(nums,0,0,dp);  
      return ans;
    }
};