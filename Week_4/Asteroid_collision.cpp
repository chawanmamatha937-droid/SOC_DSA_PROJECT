
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> stk; 
        for (int ast : asteroids) {
            bool destroyed = false;
            while (!stk.empty() && stk.back() > 0 && ast < 0) {
                if (stk.back() < abs(ast)) {
                    stk.pop_back();
                    continue; 
                } 
                else if (stk.back() == abs(ast)) {
                    stk.pop_back();
                    destroyed = true;
                    break;
                } 
                 else {
                    destroyed = true;
                    break;
                }
            }
            
            if (!destroyed) {
                stk.push_back(ast);
            }
        }
        
        return stk;
    }
};