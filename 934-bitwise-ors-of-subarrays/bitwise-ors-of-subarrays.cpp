class Solution {
public:
    int subarrayBitwiseORs(vector<int>& arr) {
       set<int>s;
       int n = arr.size();
       for(int i =0;i<arr.size();i++){
        int x = arr[i];
        int xx =0;
        int yy = x;
        s.insert(x);
        for(int j = i-1; j>=0; j--){
            xx|=arr[j];
            yy = xx|x;
            if(xx==yy)break;
            s.insert(yy);
        }
       }
       return s.size();
       


    }
};