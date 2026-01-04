class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int cnt =0;
        for(int i =0;i<nums.size();i++){
            int a = nums[i];
            int b =sqrt(a);
            int kali = 0;
            int cc =0;
            for(int j =1;j<=b;j++){
                if(a%j==0 ){
                    if(a/j !=j){
                    cc+=(a/j + j);
                    kali+=2;
                    }
                    else{
                        kali++;
                        cc+=a/j;
                    }
                }
                if(kali>4){
                    cc= 0;
                    break;
                }
            }
            if(kali==4)cnt+=cc;
        }
        return cnt;
    }
};