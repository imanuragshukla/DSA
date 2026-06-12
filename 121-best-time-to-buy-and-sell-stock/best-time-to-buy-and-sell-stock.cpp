class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi =0;
        int n = prices.size();
        int m = prices[n-1];
        for(int i=n-2;i>=0;i--){
            maxi = max(maxi,m-prices[i]);
            m = max(m,prices[i]);
        }
        return maxi;
    }
};