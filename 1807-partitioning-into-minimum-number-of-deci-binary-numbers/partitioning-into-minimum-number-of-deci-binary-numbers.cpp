class Solution {
public:
    int minPartitions(string n) {
        int hi = n[0]-'0';
        for(int i=0;i<n.size();i++){
            int  aa = n[i]-'0';
            hi = max(hi,aa);
        }
        return hi;

    }
};