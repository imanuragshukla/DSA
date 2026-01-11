class Solution {
public:
    int residuePrefixes(string s) {
        int ans =0;
        unordered_map<int,int>m;
        for(int i =0;i<s.size();i++){
            m[s[i]]++;
            int a = m.size();
            if(a== (i+1)%3)ans++;
        }
        return ans;
    }
};