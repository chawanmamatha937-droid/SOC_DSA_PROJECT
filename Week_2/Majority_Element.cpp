class Solution {
public:
    int majorityElement(vector<int>& nums) {
         int num1 = 0;
        int count = 0;
        
        for (int num : nums) {
            if (count == 0) {
                num1 = num;
            }
            if (num == num1) {
                count++;
            } else {
                count--;
            }
        }
        
        return num1;
    
    }
};
