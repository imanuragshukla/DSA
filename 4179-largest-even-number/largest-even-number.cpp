class Solution {
public:
    string largestEven(string s) {
        int n = s.size();
        for(int i = n-1;i>=0;i--){
            int a = s[i]-'0';
            if(a%2==0)return s;
            else{
                s.pop_back();
            }
        }
        return s;
    }
};