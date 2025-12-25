class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(),happiness.end());
        long long sum =0;
        int i = happiness.size()-1;
        int j =i;
        while(k--){
            sum+=(max(0,happiness[i]-(j-i)));
            i--;
        }
        return sum;
    }
};