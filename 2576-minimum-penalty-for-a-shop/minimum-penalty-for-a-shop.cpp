class Solution {
public:
    int bestClosingTime(string customers) {
        int cucu = 0;
        int cc =0;
        int pp = -1;
        for(int i =0;i<customers.size();i++){
            if(customers[i]=='Y')cc++;
            else{
                cc--;
            }
            if(cc>cucu){
                cucu = cc;
                pp =i;
            }
        }
        return pp+1;
    }
};