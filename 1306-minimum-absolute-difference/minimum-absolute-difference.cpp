class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int minDiff = INT_MAX;
        for(int i=0;i<n-1;i++){
            int a = abs(nums[i]-nums[i+1]);
            if(minDiff>a){
                while(ans.size()){
                    ans.pop_back();
                }
                ans.push_back({nums[i],nums[i+1]});
                minDiff = a;
            }
            else if(minDiff==a){
                ans.push_back({nums[i],nums[i+1]});
            }
            
        }
        return ans;
    }
};