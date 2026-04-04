class Solution {
public:
    string decodeCiphertext(string encodedText, int rows) {
        string s;
        int n = encodedText.size();
        int n1 = n/rows;
        for(int i=0;i<n1;i++){
            int j = i;
            while(j<n){
                s.push_back(encodedText[j]);
                j+=(n1+1);
            }
        }
        int nn = s.size();
        for(int i= nn-1;i>=0;i--){
            if(s[i]!=' ')break;
            s.pop_back();
        }
        return s;
    }
};