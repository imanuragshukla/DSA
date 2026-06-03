class Solution {
public:
    int characterReplacement(string s, int k) {
        int ans = 0;

for(char target = 'A'; target <= 'Z'; target++) {
    int i = 0;
    int changes = 0;

    for(int j = 0; j < s.size(); j++) {

        if(s[j] != target)
            changes++;

        while(changes > k) {
            if(s[i] != target)
                changes--;
            i++;
        }

        ans = max(ans, j - i + 1);
    }
}
return ans;
    }
};