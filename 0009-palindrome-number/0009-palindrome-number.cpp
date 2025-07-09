class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0){
            return false;
        }
       long num = 0;
       int q = x;
       

       while (q != 0){
        int digit = q % 10;
        num = num *10 + digit;
        q = q/ 10;
       }
       if (num != x){
        return false;
       }
       return true;

    }
};