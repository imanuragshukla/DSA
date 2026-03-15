class Solution {
public:
    int minCost(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>m1,m2,m3;
        int n = nums1.size();
        for(int i=0;i<n;i++){
            m1[nums1[i]]++;
            m2[nums2[i]]++;
            m3[nums1[i]]++;
            m3[nums2[i]]++;   
        }
        int cost = 0;
        int rem =0;
        for(auto it:m3){
            int a = it.first;
            int b = it.second;
            if(b%2)return -1;
            b/=2;
            int x1 = m1[a];
            if(x1==b)continue;
            rem+=(x1-b);
            cost+=abs(x1-b);

        }
         if(rem==0)return cost/2;
            return -1;

    }
};