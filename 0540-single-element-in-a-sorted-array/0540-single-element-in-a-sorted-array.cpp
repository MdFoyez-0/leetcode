class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        if (n == 1 )return nums[0];
        int low = 0;
        int high = n-1;
        while (low <= high ){
            int mid = low + (high - low)/2;
            if(mid == 0 && nums[0] != nums[1])return nums[mid];
            if(mid == n-1 && nums[n-1] != nums[n-2])return nums[mid];

            if (nums[mid-1] != nums[mid] && nums[mid +1] != nums[mid]){
                 
                return nums[mid];
            }
            if(mid % 2==0){//even
            if (nums[mid] == nums[mid -1]){
                high = mid -1;//left
            } 
            else {
                low = mid + 1;//right
            }
            }
           else{
             if (nums[mid] == nums[mid -1]){
                low = mid + 1;//right
            } 
            else {
               high = mid - 1;//left
            }
        }    
        }
         return -1;
    }
};