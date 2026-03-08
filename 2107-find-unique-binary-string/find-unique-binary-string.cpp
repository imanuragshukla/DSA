class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        string ns;
        for(int i=0;i<nums.size();i++){
            char curr =nums[i][i];
            if(curr=='0')ns.push_back('1');
            else{
                ns.push_back('0');
            }
        }
        return ns;
    }
};