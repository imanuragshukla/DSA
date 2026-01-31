class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char no=target;
        for(int i=0;i<letters.size();i++){
            if(letters[i]>target ){
                if(no==target){
                    no=letters[i];
                    continue;
                }
                no=min(no,letters[i]);
            }
        }
        return no==target?letters[0]:no;
    }
};