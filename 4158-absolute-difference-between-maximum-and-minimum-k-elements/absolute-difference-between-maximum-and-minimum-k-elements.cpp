class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int l =0;
        int r = nums.size()-1;
        int a = k;
        int ans =0;
        while(k--){
            ans+=(nums[r]-nums[l]);
            r--;
            l++;
        }
        return ans;
    }
};