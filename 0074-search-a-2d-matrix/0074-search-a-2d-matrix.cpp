class Solution {
public:
    bool searchinrow(vector<vector<int>>& matrix, int target,int row){
        int n = matrix[0].size();
        int left = 0;
        int right = n -1;
        while(left <= right){
            int mid = left +(right - left)/2;
            if (target == matrix[row][mid]){
                return true;

            }
            else if (target > matrix[row][mid]){
                left = mid + 1;
            }
            else{
                right = mid -1 ;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int startrow = 0;
        int endrow = m-1;
        while (startrow <= endrow){
            int midrow = startrow + (endrow - startrow)/2;
            //found needed row
            if (target >= matrix[midrow][0]&& target <= matrix[midrow][n-1]){
                return searchinrow(matrix,target,midrow);
            }
            //next row of mid or down
            else if(target >= matrix[midrow][n-1] ){
                startrow = midrow + 1;
            }
            //before row of mid or up
            else{
                endrow = midrow -1;
            }
        }
        return false;
    }
};