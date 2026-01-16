class Solution {
public:
    int maximizeSquareArea(int m, int n, vector<int>& h, vector<int>& v) {
        int N=(1e9+7);
        h.push_back(1);
        h.push_back(m);
        v.push_back(1);
        v.push_back(n);
        
        sort(h.begin(),h.end());
        sort(v.begin(),v.end());

        unordered_set<int>x,y;

        for(int i=0;i<h.size();i++){
            for(int j=i+1;j<h.size();j++){
                x.insert(h[j]-h[i]);
            }
        }
        for(int i=0;i<v.size();i++){
            for(int j=i+1;j<v.size();j++){
                y.insert(v[j]-v[i]);
            }
        }
        long long maxi=0;
        for(auto ele:x){
            if(y.count(ele)) maxi=max(maxi,(long long) ele);
        }
        if(maxi<1) return -1;
        return (maxi*maxi)%N;
    }
};