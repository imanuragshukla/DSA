class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        unordered_map<int,int>m;
        vector<int>arr1 = arr;
        sort(arr1.begin(),arr1.end());
        int pos = 0;
        int ele = INT_MIN;
        for(int i=0;i<arr1.size();i++){
            if(arr1[i]!=ele){
                ele = arr1[i];
                pos++;
            }
            m[arr1[i]]=pos;
        }

        for(int i=0;i<arr.size();i++)arr1[i] = m[arr[i]];

        return arr1;
    }
};