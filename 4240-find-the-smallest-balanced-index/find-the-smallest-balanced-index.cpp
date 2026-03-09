class Solution {
public:
    int smallestBalancedIndex(vector<int>& nums) {
        int zer =0;
        int idx = -1;
        long long sum =0;
        vector<long long> v;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                zer++;
                idx = i;
            }
            sum+=nums[i];
            v.push_back(sum);
        }
        if(zer > 0){
            if(idx!=0)return 0;
        }
       
        int n = v.size();
        int id = -1;
        long long mul = 1;
        for(int i = n-1 ; i>0;i--){
            if(mul>v[i])break;
            
            if(v[i-1]== mul)id = i;
             if (mul > LLONG_MAX / nums[i]) break;
            mul*=nums[i];
        }
        return id;

    }
};