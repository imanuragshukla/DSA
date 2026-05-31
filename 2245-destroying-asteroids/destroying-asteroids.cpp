class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end());
        long long pp = mass;
        for(int i=0;i<asteroids.size();i++){
            if(pp<asteroids[i])return false;
            pp+=asteroids[i];
        }
        return true;
    }
};