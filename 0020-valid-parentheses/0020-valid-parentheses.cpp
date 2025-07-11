class Solution {
public:
    bool isValid(string s) {
       
        stack<char>s1;;
        for(char c : s){
            if (c=='('|| c == '{'|| c== '['){
                s1.push(c);
                }
            else {
                if(s1.empty())
                return false;
            
            char top = s1.top();
            if(( c == ')' && top == '(')||
            (c== '}' && top == '{')||
            (c== ']' && top == '['))
            {
                s1.pop();
            }
            else {
                return false;;
            }
            }
        }
            if ( s1.empty()){
                return true ;
            }
            else {
                return false;
            }
    }
};