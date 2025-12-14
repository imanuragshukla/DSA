class Solution {
public:
       long long minMoves(vector<int>& balance) {
    int n = balance.size();
    int idx = -1;
    long long need = 0, total = 0;

    for (int i = 0; i < n; i++) {
        total += balance[i];
        if (balance[i] < 0) {
            idx = i;
            need = -balance[i];
        }
    }

    if (total < 0) return -1;

    if (need == 0) return 0;

    long long ans = 0;


    for (int d = 1; d < n && need > 0; d++) {
        int left = (idx - d + n) % n;
        int right = (idx + d) % n;

        if (balance[left] > 0 && need > 0) {
            long long take = min((long long)balance[left], need);
            ans += take * d;
            need -= take;
            balance[left] -= take;
        }

        if (left != right && balance[right] > 0 && need > 0) {
            long long take = min((long long)balance[right], need);
            ans += take * d;
            need -= take;
            balance[right] -= take;
        }
    }

    return (need == 0) ? ans : -1;
}




    
};