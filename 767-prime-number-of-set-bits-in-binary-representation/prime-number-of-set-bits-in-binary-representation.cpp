class Solution {
public:
    bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    if (n == 2) {
        return true;
    }
    if (n % 2 == 0) {
        return false;
    }
    for (int i = 3; i <= std::sqrt(n); i += 2) {
        if (n % i == 0) {
            return false; 
        }
    }

    return true; 
}

    int countPrimeSetBits(int left, int right) {
        int cnt =0;
        for(int i= left;i<=right;i++){
            int a = __popcount(i);
            if(isPrime(a))cnt++;
        }
        return cnt;
    }
};