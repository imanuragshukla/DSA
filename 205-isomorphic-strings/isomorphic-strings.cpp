class Solution {
public:
    bool isIsomorphic(string s, string t) {
        bool flag = true;
        int i=0;
        unordered_map<char,char>m;
        unordered_map<char,char>b;
        while(i<s.size()){
            if(m.find(s[i])==m.end() && b.find(t[i])==b.end()){m[s[i]]=t[i];b[t[i]]=s[i];continue;}
            if(m[s[i]]!=t[i] || b[t[i]]!=s[i]){
                flag = false;
                break;
            }
            i++;

        }
        return flag;
    }
};