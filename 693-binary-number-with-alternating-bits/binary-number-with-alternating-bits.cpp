class Solution {
public:
    bool hasAlternatingBits(int n) {
        int a = n &1;
        a = a^1;
        bool flag = true;
        while(n){
            if((n&1)==a)return false;
            a = n&1;
            n>>=1;
        }
        return flag;
    }
};