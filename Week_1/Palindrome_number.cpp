class Solution {
public:
    bool isPalindrome(int x) {
      if (x < 0) return false;
      int reversenum =0;
      int originalnum = x;

      while (x > 0){
        reversenum = (reversenum*10) + (x%10);
        x =x/10;
      }   
      return reversenum == originalnum;
    }
};