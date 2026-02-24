class Solution {
public:
    bool hasAllCodes(string s, int k) {
        set<string> s1;
        int n = s.size();
        int i =0;
        
        while(i<=(n-k)){
            string ss = s.substr(i,k);
            s1.insert(ss);
            i++;
        }
        int kk = s1.size();

        return kk==pow(2,k);
    }
};