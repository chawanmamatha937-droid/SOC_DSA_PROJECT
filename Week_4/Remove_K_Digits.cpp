class Solution {
public:
    string removeKdigits(string num, int k) {
        if (num.length() == k) {
            return "0";
        }
        
        string stk = "";
        
        for (char digit : num) {
            while (k > 0 && !stk.empty() && stk.back() > digit) {
                stk.pop_back();
                k--;
            }
            stk.push_back(digit);
        }
        
        while (k > 0) {
            stk.pop_back();
            k--;
        }
        
        int startIdx = 0;
        while (startIdx < stk.length() && stk[startIdx] == '0') {
            startIdx++;
        }
        
        string result = stk.substr(startIdx);
        return result.empty() ? "0" : result;
    }
};