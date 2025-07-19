class Solution {
public:
    int addDigits(int num) {

        if (num <=9 )return num;
      

        while (num >= 10){
        int sum = 0;
        sum += num %10;
        num /= 10;
        int ans = num + sum;
        num = ans;
        }
       
return num;
}   
};