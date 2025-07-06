class Solution {
public:
    bool isPalindrome(string s) {

        if( s.empty()){
    return true;
    }        
        string fresh;
        for(char c : s ){
            if(isalnum(c)){
                fresh += tolower(c);

            }
        }
        stack<char>s1;
        for(char c : fresh ){
            s1.push(c);
        }
    for( char c : fresh ){
        if (s1.top() != c ){
            return false;
        }
         s1.pop();
    }
     return true;

    }
};