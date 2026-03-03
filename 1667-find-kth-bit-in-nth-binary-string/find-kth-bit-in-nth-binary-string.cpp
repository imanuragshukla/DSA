class Solution {
public:
    char findKthBit(int n, int k) {
        if(n==1)return '0';
        string s = "0";
        int p = n-1;
        while(p--){
             int i = s.size();
            s.push_back('1');
            i--;
            while(i>=0){
                if(s[i]=='1')s.push_back('0');
                else{
                    s.push_back('1');
                }
                i--;
            }
        

        }
        return s[k-1];
    
    }
};