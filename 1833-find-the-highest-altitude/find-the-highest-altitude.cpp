class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxi = 0;
        int gg =0;
        for(int i =0;i<gain.size();i++){
            gg+=gain[i];
            maxi = max(maxi,gg);
        }
        return maxi;
    }
};