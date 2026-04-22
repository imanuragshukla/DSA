class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        vector<string>ans;
        int n1 = queries.size();
        int n2 = dictionary.size();
        int n3 = queries[0].size();
        for(int i=0;i<n1;i++){
            string s1 = queries[i];
            int pp=0;
            for(int j=0;j<n2;j++){
                string s2= dictionary[j];
                int cnt =0;
                for(int k=0;k<n3;k++){
                    if(s1[k]!=s2[k])cnt++;
                }
                if(cnt<=2){
                    pp=1;
                    break;
                }
            }
            if(pp==1)ans.push_back(s1);
        }
        return ans;
    }
};