class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
         sort(nums.begin(),nums.end());
        if(k==1)return 0;
        int l=0;
        int r=k-1;
        int mini=INT_MAX;
        for(int i=r;i<nums.size();i++){
            mini=min(mini,nums[i]-nums[l]);
            l++;

        }
        return mini;
    }
};