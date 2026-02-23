class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        int first =0;
        int second =0;
        int pp =0;
        for(int i=0;i<nums.size();i++){
             if(nums[i]%2){
                pp^=1;
            }
            if(i%6==5)pp^=1;
            
            if(pp==0)first+=nums[i];
            else{
                second+=nums[i];
            }
           
        }
        return first - second;
    }
};