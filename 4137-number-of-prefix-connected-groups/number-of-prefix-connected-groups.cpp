class Solution {
public:
    int prefixConnected(vector<string>& words, int k) {
        int cnt1= 0;
        int n = words.size();
        unordered_map<string,int>m;
        for(int i=0;i<n;i++){
            int n1 = words[i].size();
            if(n1<k){
                cnt1++;
                continue;
            }
            string ss= words[i].substr(0,k);
            m[ss]++;
        }

        int cnt2 =0;
        for(auto it:m){
            if(it.second>1){
                cnt2++;
            }
        }
        return cnt2;

    }
};