class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int pp = accumulate(apple.begin(),apple.end(),0);
        sort(capacity.begin(),capacity.end());
        int i =capacity.size()-1;
        int ans =0;
        while(i>=0){
            ans+=capacity[i];
            if(ans>=pp)return (capacity.size()-i);
            i--;
        }
        return 1;
    }
};