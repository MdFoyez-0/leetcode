class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
         
         int n = matrix.size();

        vector<unordered_set<int>>rows(n);
        vector<unordered_set<int>>cols(n);



        for(int i = 0 ; i<n ; i++) {
            for(int j = 0 ; j< n ; j++){
            
            int nums = matrix[i][j];

            if( rows[i].count(nums) || cols[j].count(nums)){
                
            return false;

            }
            else {
            rows[i].insert(nums);
            cols[j].insert(nums);

            }
        
            }
        }

    return true;
        
    }
};