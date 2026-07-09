class Solution {
public:
    vector<bool> pathExistenceQueries(int n, vector<int>& nums, int maxDiff, vector<vector<int>>& queries) {

        if (n == 1) {
            vector<bool> ans;
            for (int i = 0; i < queries.size(); i++) {
                ans.push_back(true);
            }
            return ans;
        }

        if (n == 2) {
            vector<bool> ans;
            bool connected = (nums[1] - nums[0] <= maxDiff);

            for (int i = 0; i < queries.size(); i++) {
                if (queries[i][0] == queries[i][1])
                    ans.push_back(true);
                else
                    ans.push_back(connected);
            }
            return ans;
        }

        unordered_map<int,int> m;
        int pp = 0;

        for (int i = 0; i < nums.size() - 1; i++) {
            if ((nums[i + 1] - nums[i]) <= maxDiff) {
                m[i] = pp;
            }
            else {
                m[i] = pp;
                pp++;
            }
        }

        if ((nums[n - 1] - nums[n - 2]) <= maxDiff)
            m[n - 1] = m[n - 2];
        else
            m[n - 1] = m[n - 2] + 1;

        vector<bool> ans;

        for (int i = 0; i < queries.size(); i++) {
            if (m[queries[i][0]] == m[queries[i][1]])
                ans.push_back(true);
            else
                ans.push_back(false);
        }

        return ans;
    }
};