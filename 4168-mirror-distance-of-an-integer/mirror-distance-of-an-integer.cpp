class Solution {
public:
    int mirrorDistance(int n) {
        string a = to_string(n);
        reverse(a.begin(),a.end());
        int aa = stoi(a);
        return abs(n-aa);
    }
};