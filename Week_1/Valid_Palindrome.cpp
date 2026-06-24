class Solution {
public:
    bool isPalindrome(string s) {
       string cleanStr = "";
        
        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];
            
            if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) {
                cleanstr += ch;
            }
           
            else if (ch >= 'A' && ch <= 'Z') {
                cleanstr += (ch + 32); 
            }
        }
        
        int start = 0;
        int end = cleanStr.length() - 1;
        
        while (start < end) {
            if (cleanStr[start] != cleanStr[end]) {
                return false; 
            }
            start++;
            end--;
        }
        
        return true;
    }
};
