class Solution {
public:
    int pp(int n){
        int cnt =0;
        while(n){
            if(n&1)cnt++;
            n>>=1;
        }
        return cnt;
    }
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>>v;
        int n = arr.size();
        for(int i=0;i<n;i++){
            int a = pp(arr[i]);
            v.push_back({arr[i],a});
        }
        sort(v.begin(),v.end(),[](const pair<int,int>& a, const pair<int,int>& b){
            if(a.second!=b.second)return a.second < b.second;
            return a.first<b.first;
        });

        vector<int> ans;
        for(int i=0;i<n;i++){
            ans.push_back(v[i].first);
        }
        return ans;

    }
};