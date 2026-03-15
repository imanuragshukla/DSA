class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<int>maxi;
        int mx = -1;
        for(int i=0;i<nums.size();i++){
            mx = max(mx,nums[i]);
            maxi.push_back(mx);
        }
        vector<int>gc;
        for(int i=0;i<nums.size();i++){
            gc.push_back(gcd(nums[i],maxi[i]));
        }
        sort(gc.begin(),gc.end());
        long long sum =0;
        int i=0;
        int j = gc.size()-1;
        while(i<j){
            sum+=gcd(gc[i],gc[j]);
            i++;
            j--;
        }
        return sum;
    }
};