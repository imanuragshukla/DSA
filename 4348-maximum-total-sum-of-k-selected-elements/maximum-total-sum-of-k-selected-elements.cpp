class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int a = k;
        int b = n-1;
        long long sum =0;
        while(a--){
            sum+=nums[b];
            b--;
        }
        int c = mul-1;
        b = n-1;
        while(c && k){
            long long y = 1LL *nums[b]*c; 
            sum+=y;
            b--;
            c--;
            k--;
        }
        return sum;

    }
};