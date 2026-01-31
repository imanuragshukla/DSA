class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char ans = letters[0];
        int mini = INT_MAX;
        for(auto i:letters){
            int aa = i-'a';
            int bb = target-'a';
            if(aa>bb){
                if(mini>aa){
                    mini =aa;
                    ans = i;
                }
            }
        }
        return ans;
    }
};