class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        int n = nums.size();
        int totalSum = 0;

        for(int i:nums){
            totalSum = (totalSum+i)%p;
        }
        int tar = totalSum% p;
        if(tar ==0) return 0;

        unordered_map<int,int>m;
        m[0]=-1;
        int curr =0;
        int min_len = n;

        for(int i=0;i<n;i++){
            curr = (curr+nums[i])%p;

            int need = (curr - tar+p) %p;

            if(m.find(need)!= m.end()){
                min_len = min(min_len , i - m[need]);
            }
            m[curr]=i;
        }

        return min_len == n ? -1 : min_len;
        
        
    }
};