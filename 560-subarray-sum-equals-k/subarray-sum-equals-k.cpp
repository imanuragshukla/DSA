class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> m;

        int sum = 0;
        int cnt = 0;

        m[0] = 1;   // empty prefix

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];

            int rem = sum - k;

            if (m.find(rem) != m.end()) {
                cnt += m[rem];
            }

            m[sum]++;
        }

        return cnt;
    }
};