class Solution{
public:
    int minOperations(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = INT_MAX;

        for (int even = 0; even < k; even++) {
            for (int odd = 0; odd < k; odd++) {

                if (even == odd) continue;

                int curr = 0;

                for (int i = 0; i < n; i++) {
                    int rem = nums[i] % k;
                    int target = (i % 2 == 0) ? even : odd;

                    int diff = abs(rem - target);

                    curr += min(diff, k - diff);
                }

                ans = min(ans, curr);
            }
        }

        return ans;
    }
};
