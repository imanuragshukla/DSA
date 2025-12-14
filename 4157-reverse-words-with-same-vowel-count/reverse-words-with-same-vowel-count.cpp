class Solution {
public:
    string reverseWords(string s) {
        int cnt =0;
        int i =0;
        for(i;i<s.size();i++){
            if(s[i]==' ')break;
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')cnt++;
        }
        i++;
        int pp =i;
        int po =0;
        for(i;i<s.size();i++){
            if(s[i]==' '){
                if(po==cnt)reverse(s.begin()+pp,s.begin()+i);
                pp=i+1;
                po=0;
            }
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')po++;
        }
        if(po==cnt)reverse(s.begin()+pp,s.begin()+i);
        return s;

    }
};