class Solution {
public: 
    bool isValid(const string& s) {
    if (s.empty()) return false;
    for (char ch : s) {
        if (!isalnum(ch) && ch != '_') {
            return false;
        }
    }
    return true;
}

vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
    unordered_map<string, int> mp = {
        {"electronics", 1},
        {"grocery", 2},
        {"pharmacy", 3},
        {"restaurant", 4}
    };

    vector<pair<int, string>> v1;
    for (int i = 0; i < code.size(); i++) {
        if (isActive[i] && isValid(code[i]) && mp.count(businessLine[i])) {
            v1.push_back({mp[businessLine[i]], code[i]});
        }
    }

    
    sort(v1.begin(), v1.end());

    vector<string> ans;
    for (auto& p : v1) {
        ans.push_back(p.second);
    }

    return ans;
}
    
};