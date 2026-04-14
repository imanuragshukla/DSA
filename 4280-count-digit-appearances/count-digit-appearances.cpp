class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int cnt =0;
        for(int i=0;i<nums.size();i++){
            int aa = nums[i];
            while(aa){
                if(aa%10==digit)cnt++;
                aa/=10;
            }
        }
        return cnt;
    }
};