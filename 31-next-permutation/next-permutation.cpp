class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int maxi = INT_MIN;
        int n = nums.size();
        int cl =0;
        int l =0;
        for(int i=n-1;i>=0;i--){
            maxi = max(maxi,nums[i]);
            if(maxi!=nums[i]){
                l = i;
                cl=1;
                break;
            }
        }
        if(cl==0){
            reverse(nums.begin(),nums.end());
            return;
        }
        int mini = INT_MAX;
        for(int i= l+1;i<n;i++){
            if(nums[i]>nums[l])mini = min(mini,nums[i]);
        }
        int idx = -1;

        for(int i=l+1;i<n;i++){
            if(nums[i]==mini)idx = i;
        }

        swap(nums[l],nums[idx]);
        sort(nums.begin()+l+1,nums.end());

        
    }
};