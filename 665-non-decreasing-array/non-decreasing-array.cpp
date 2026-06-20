class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        bool flag1 = true;
        bool flag2 = true;
        vector<int>v = nums;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<nums[i-1]){
                nums[i]=nums[i-1];
                break;
            }
        }
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]<nums[i]){
                flag1=false;
                break;
            }
        }
        if(flag1==true)return flag1;

        for(int i=1;i<v.size();i++){
            if(v[i]<v[i-1]){
                v[i-1]=v[i];
                break;
            }
        }
        for(int i=0;i<v.size()-1;i++){
            if(v[i+1]<v[i]){
                flag2=false;
                break;
            }
        }
        if(flag2)return flag2;

        return false;

    }
};