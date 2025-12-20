class Solution {
public:
    long long maximumScore(vector<int>& nums, string s) {
        int n = s.size();
        long long ans =0;
        if(s.size()==1){
            if(s[0]=='1')return 1LL* nums[0];
            else{
                return ans;
            }
        }
        priority_queue<int>pq;
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
            if(s[i]=='1'){ans+=pq.top();pq.pop();}
           
        }
        return ans;
    }

};