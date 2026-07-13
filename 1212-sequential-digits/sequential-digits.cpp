class Solution {
public:
    int countDigits(int num) {
        int cnt = 0;
        while (num) {
            cnt++;
            num /= 10;
        }
        return cnt;
    }

    vector<int> generateNumbers(int len) {
        vector<int> digits = {1,2,3,4,5,6,7,8,9};
        vector<int> res;

        for (int i = 0; i + len <= 9; i++) {
            int num = 0;
            for (int j = i; j < i + len; j++) {
                num = num * 10 + digits[j];
            }
            res.push_back(num);
        }

        return res;
    }

    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;

        int lowDigits = countDigits(low);
        int highDigits = countDigits(high);

        for (int len = lowDigits; len <= highDigits; len++) {
            vector<int> nums = generateNumbers(len);

            for (int num : nums) {
                if (num >= low && num <= high)
                    ans.push_back(num);
            }
        }

        return ans;
    }
};