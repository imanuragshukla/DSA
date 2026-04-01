class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string s) {
        int n = positions.size();
        stack<int>st;
        vector<int>idx(n);
        for(int i=0;i<n;i++)idx[i] =i;
        sort(idx.begin(),idx.end(),[&](int i,int j){
            return positions[i]<positions[j];
        });
        for(int j=0;j<n;j++){
            int i = idx[j];
            if(s[i] == 'L' && st.empty()) continue;
            else if(s[i]== 'R') st.push(i);
            else{
                while(!st.empty()){
                    int top = st.top();
                    st.pop();
                    if(healths[top]>healths[i]){
                        healths[top]-=1;
                        healths[i]= 0;
                        st.push(top);
                        break;
                    }
                    else if(healths[top]== healths[i]){
                        healths[i]=0;
                        healths[top]=0;
                        break;
                    }
                    else{
                        healths[i]-=1;
                        healths[top]=0;
                        
                    }
                }
            }
        }
        vector<int> ans;
        for(int x : healths) {
            if(x) ans.push_back(x);
        }
        return ans;
    }
};