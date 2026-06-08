class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>a,b;
        int cnt =0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot)a.push_back(nums[i]);
            else if(nums[i]>pivot)b.push_back(nums[i]);
            else{
                cnt++;
            }
        }
        for(int i=0;i<a.size();i++){
            nums[i]=a[i];
        }
        int ii = a.size();
        while(cnt--){
            nums[ii]=pivot;
            ii++;
        }
        for(int i=0;i<b.size();i++){
            nums[ii]=b[i];
            ii++;
        }
        return nums;
    }
};