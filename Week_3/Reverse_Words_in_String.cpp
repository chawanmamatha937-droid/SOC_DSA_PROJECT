class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        int right = 0;
        int i = 0;
        
        while (i < n) {
            while (i < n && s[i] == ' ') i++;
            
            if (i < n) {
                if (right != 0) {
                    s[right++] = ' ';
                }
                while (i < n && s[i] != ' ') {
                    s[right++] = s[i++];
                }
            }
        }
        
        s.resize(right);
        reverse(s.begin(), s.end());
        
        int wordStart = 0;
        for (int j = 0; j <= s.length(); j++) {
            if (j == s.length() || s[j] == ' ') {
                reverse(s.begin() + wordStart, s.begin() + j);
                wordStart = j + 1;
            }
        }
        
        return s;
    }
};