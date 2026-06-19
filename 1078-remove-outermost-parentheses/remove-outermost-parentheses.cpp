class Solution {
public:
    string removeOuterParentheses(string s) {
        string temp ="";
        string ans;
        stack<char>st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){temp.push_back(s[i]);st.push('(');}
            else{
                st.pop();
                temp.push_back(s[i]);
                if(st.empty()){
                    for(int j=1;j<temp.size()-1;j++){
                        ans.push_back(temp[j]);
                    }
                    temp="";
                }
            }
        }
        return ans;
    }
};