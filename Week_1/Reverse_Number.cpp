
class Solution {
public:
    int reverse(int x) {
       int num = 0;
       while(x!=0){
        int y = x%10;
        num = (num* 10) + y;
       x = x/10;}
       if (num > INT_MAX || num < INT_MIN){
        return 0;
       }
       return num;
     } 
    
};