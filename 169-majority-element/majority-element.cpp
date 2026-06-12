class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int a=0;
        int b=0;
        for(int i:nums){
            if(a==0)b=i;
            
            if(i==b)a++;
            else(a--);
        }
        return b;
    }
};