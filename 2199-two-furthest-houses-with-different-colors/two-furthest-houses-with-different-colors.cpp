class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int maxi = INT_MIN;
        int n = colors.size();
        int a1=INT_MIN;
        int a2 = INT_MIN;
        int a1_val;
        int a2_val;
        for(int i=0;i<n;i++){
            if(a1==INT_MIN){
                a1=i;
                a1_val = colors[i];
            }
            else{
                if(colors[i]!=a1_val){
                    a2=i;
                    a2_val=colors[i];
                    break;
                }
            }
        }

        for(int i=n-1;i>=0;i--){
            if(colors[i]==a1_val){
                maxi = max(maxi,i-a2);
            }
            else if(colors[i]==a2_val){
                maxi = max(maxi,i-a1);
            }
            else{
                maxi = max(maxi,i-a1);
            }
        }


        return maxi;
    }
};