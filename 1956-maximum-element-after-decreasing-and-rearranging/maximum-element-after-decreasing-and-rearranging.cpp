class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        arr[0]=1;
        for(int i=0;i<arr.size()-1;i++){
            if(abs(arr[i+1]-arr[i])>1)arr[i+1]=arr[i]+1;
        }
        int n = arr.size();
        return arr[n-1];
    }
};