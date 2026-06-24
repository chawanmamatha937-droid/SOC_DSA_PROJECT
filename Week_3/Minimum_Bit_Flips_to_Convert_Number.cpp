class Solution {
public:
    int minBitFlips(int start, int goal) {
       int Result = start ^ goal;
        int count = 0;
           while (Result > 0) {
            Result &= (Result - 1);
            count++;
        }
        
        return count;
    }
};