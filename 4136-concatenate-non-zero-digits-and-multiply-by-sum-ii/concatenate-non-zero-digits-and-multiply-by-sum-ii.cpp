class Solution {
public:
    static const int MOD = 1e9 + 7;

    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {

        int n = s.length();
        vector<int> nonZeroPrefix(n), digitPrefixSum(n), prefixNum(n);
        vector<long long> pow10(n + 5);

        pow10[0] = 1;
        
        for (int i = 0; i < n; i++) {
           int d = s[i] - '0';
           nonZeroPrefix[i] = (d != 0);
            if (i > 0) nonZeroPrefix[i] += nonZeroPrefix[i - 1];

            digitPrefixSum[i] = (d != 0 ? d : 0);
            if (d == 0) {
                if (i > 0) prefixNum[i] = prefixNum[i - 1];
            } else {
                prefixNum[i] = (i == 0 ? d : (prefixNum[i - 1] * 10LL + d) % MOD);
            }
            if (i > 0){
                digitPrefixSum[i] = (digitPrefixSum[i] + digitPrefixSum[i - 1]) % MOD;
            }
            
        }
        for (int i = 1; i <= n; i++){
            pow10[i] = (pow10[i - 1] * 10) % MOD;
        }

        vector<int> result;

        for (auto &q : queries) {

            int L = q[0];
            int R = q[1];

            int nonZeroCount = nonZeroPrefix[R] - (L > 0 ? nonZeroPrefix[L - 1] : 0);

            if (nonZeroCount == 0) {
                result.push_back(0);
                continue;
            }

            long long digitSum = digitPrefixSum[R] - (L > 0 ? digitPrefixSum[L - 1] : 0);
            if (digitSum < 0) digitSum += MOD;

            long long leftPrefix = (L > 0 ? prefixNum[L - 1] : 0);

            long long extracted =
                (prefixNum[R] - (leftPrefix * pow10[nonZeroCount]) % MOD + MOD) % MOD;

            long long res = (extracted * digitSum) % MOD;
            result.push_back(res);
        }

        return result;
    }
};
