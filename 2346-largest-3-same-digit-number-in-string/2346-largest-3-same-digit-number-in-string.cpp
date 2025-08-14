class Solution {
public:
    string largestGoodInteger(string num) {
        if (num.length() == 0) return "";
        string ans = "";

        for( int i = 0 ; i<= num.size()-3 ; i++){
            if (num[i] == num[i+1] && num[i] == num[i+2] ){
            string s1 = num.substr(i,3);
            if (s1 > ans ){
             ans = s1   ;
            }
        }
        }
return ans;

    }
};