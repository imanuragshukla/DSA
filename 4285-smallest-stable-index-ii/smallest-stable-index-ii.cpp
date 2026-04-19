class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
         int n = nums.size();
        vector<int>mini(n);
        vector<int>maxi(n);
        int m1 = INT_MIN;
        int m2 = INT_MAX;
        for(int i=0;i<n;i++){
            m1 = max(m1,nums[i]);
            maxi[i]=m1;
        }
        for(int i=n-1;i>=0;i--){
            m2 = min(m2,nums[i]);
            mini[i]=m2;
        }
        
        for(int i=0;i<n;i++){
            int pp = maxi[i]-mini[i];
            if(pp<=k){
                return i;
            }
        }
        return -1;
        
    }
};