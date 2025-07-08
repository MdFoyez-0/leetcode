class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        unordered_set<char>rows[9];
        unordered_set<char>cols[9];
        unordered_set<char>boxes[9];

        for ( int i = 0 ; i< 9 ; i++){
            for(int j = 0 ; j< 9 ; j++){

                if (board[i][j] == '.'){
                    continue;
                }
                char nums = board[i][j];

                if (rows[i].count(nums)){
                    return false;
                }
                else {
                    rows[i].insert(nums);
                }
                if(cols[j].count(nums)){
                    return false;
                }
                else{
                    cols[j].insert(nums);
                }
                int boxindex = (i/3) *3 + (j/3) ;

                if ( boxes[boxindex].count(nums)){
                    return false;

                }
                else {
                    boxes[boxindex].insert(nums);
                }



            }
        }
        return true;

        
    }
};