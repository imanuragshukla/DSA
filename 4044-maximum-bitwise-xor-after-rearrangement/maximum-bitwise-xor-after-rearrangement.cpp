class Solution {
public:
    string maximumXor(string s, string t) {
        int zer =0;
        int one =0;
        int n = t.size();
        for(int i=0;i<n;i++){
            if(t[i]=='0')zer++;
            else{
                one++;
            }
        }
        string ans;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                if(one){
                    one--;
                    ans.push_back('1');
                }
                else{
                    zer--;
                    ans.push_back('0');
                }
            }
            else{
                if(zer){
                    zer--;
                    ans.push_back('1');
                }
                else{
                    one--;
                    ans.push_back('0');
                }
            }
        }
        return ans;
    }
};