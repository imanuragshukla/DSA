class Solution {
public:
    bool pp(int mid, vector<int>&price,int k){
        int o = k-1;
        int prev =  price[0];
        for(int i=0;i<price.size();i++){
            if((price[i]-prev)>=mid){
                prev = price[i];
                o--;
            }
        }
        if(o>0)return false;
        return true;
    }
    int maximumTastiness(vector<int>& v, int k) {
        sort(v.begin(),v.end());
        int n = v.size();
        int j = v[n-1] - v[0];
        int i = 0;
        int maxi = -1;
        while(i<=j){
            int mid = (i+j)/2;
            if(pp(mid,v,k)){
                maxi = max(maxi,mid);
                i= mid+1;
            }
            else{
                j= mid-1;
            }
        }
        return maxi;
        
    }
};