class Solution {
public:
    int numberOfSubstrings(string s) {
        int i=0;
        int j =0;
        int n = s.size();
        vector<int>v(3,0);
        int ans =0;
        while(j<n){
           int a = s[j]-'a';
           v[a]++;
           while((v[0]>0 && v[1]>0 && v[2]>0)){
            ans+=n-j;
            int b = s[i]-'a';
            v[b]--;
            i++;
           }
           j++;
        }
        return ans;
    }
};