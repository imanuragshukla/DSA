class Solution {
public:
    long long getDescentPeriods(vector<int>& nums) {
        int i =0;
        int j = 0;
        long long ans=0;
        int n = nums.size();
        while(j<n){
            if(i==j){
                ans++;
                j++;
                continue;
            }
            if((nums[i]-nums[j])==(j-i)){
                j++;
                ans+=(j-i);
            }
            else{
                i=j;
            }
        }
        return ans;
    }
};