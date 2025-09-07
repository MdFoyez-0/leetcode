class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if ( nums.size() == 1 ){
            return nums[0];
        }
         int n = nums.size();
         for ( int i = 0; i < n ; i++){
            int j;
            for (j = 0 ; j <n; j++){
            if ( i != j && nums[i] == nums[j]){
                break;
            }
            }
               if (j == n) {  
               return nums[i];
            }
         }
return -1 ;

    }
};