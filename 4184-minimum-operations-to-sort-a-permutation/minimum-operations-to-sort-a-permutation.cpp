class Solution {
    bool isRotatedSorted(vector<int>& nums) {
        int n = nums.size();

        int drops = 0;
        for(int i=1; i<n; i++) {
            if(nums[i] < nums[i-1]) {
                drops++;
            }
        }

        return (drops == 0 || (drops == 1 && nums[0] > nums[n-1]));
    }
    
    int cntRotated(vector<int>& nums) {
        int n = nums.size();

        int idx = 0;
        for(int i=1; i<n; i++) {
            if(nums[i] < nums[i-1]) {
                idx = i;
                break;
            }
        }
        
        return idx;
    }

public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();

        int ans = n + 1;
        
        if(isRotatedSorted(nums)) {
            int k = cntRotated(nums);
            ans = min(ans, k);
            ans = min(ans, 1 + (n - k) + 1);
        }
        
        reverse(nums.begin(), nums.end());
        if(isRotatedSorted(nums)) {
            int k = cntRotated(nums);
            ans = min(ans, 1 + k);
            ans = min(ans, 1 + (n - k));
        }
        
        if(ans == n + 1) return -1;
        
        return ans;
    }
};