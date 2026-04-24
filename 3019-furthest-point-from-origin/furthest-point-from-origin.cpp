class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int pp =0;
        int yy =0;
        for(auto it:moves){
            if(it=='L')yy++;
            else if(it=='R')yy--;
            else{
                pp++;
            }
        }
        yy = abs(yy);
        return yy+pp;
        
    }
};