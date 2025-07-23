class Solution {
public:
void backtrack( vector<string>&s ,int open , int close, int n ,string s1){
    if (open == n && close == n ){
        s.push_back(s1);
        return ;

    }
    if (open < n ){
        backtrack( s ,open +1,close,n , s1+"(");
    }
    if(close < open ){
        backtrack( s,open ,close+1,n ,s1+")");
    }
}
    vector<string> generateParenthesis(int n) {
        
         vector<string> s;
         int open = 0,close = 0;
         backtrack(s,open,close,n,"");
         return s;

    }
};