class Solution {
public:
    bool uniformArray(vector<int>& nums) {
        int odd =0;
        int even= 0;
        int mini = INT_MAX;
        for(int x:nums){
            if(x%2)odd++;
            else{
                even++;
            }
            mini = min(mini,x);
        }
        if(mini%2==0 && odd>0)return false;
        return true;
    }
};