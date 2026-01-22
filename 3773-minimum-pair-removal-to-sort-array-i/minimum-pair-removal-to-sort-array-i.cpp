class Solution {
public:
    int minimumPairRemoval(vector<int>& nums) {
        int n = nums.size();
       
        int count = 0;

        for (int j = 0; j < n - 1; j++) {
            bool flag = false;
            int mini = INT_MAX;
            int idx = -1;
            int sum = 0;
            int cnt = 0;
            int prev = INT_MIN;

            for (int i = 0; i < n; i++) {
                if (nums[i]==1001) continue;

                if (nums[i] < prev) flag = true;
                prev = nums[i];

                sum += nums[i];
                cnt++;

                if (cnt == 2) {
                    if (sum < mini) {
                        mini = sum;   
                        idx = i;
                    }
                    cnt = 1;
                    sum = nums[i];
                }
            }

            if (!flag) return count;

            int k = idx - 1;
            while (k >= 0 && nums[k]==1001) k--;

            nums[k] = mini;
            nums[idx] = 1001;
            count++;
        }

        return count;
    }
};
