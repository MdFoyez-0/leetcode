class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       
        int n = nums.size();
        int low = 1;
        int high = n -1 ;
        
        while (low < high ){
        int mid= low + (high - low )/2;
        int count = 0;
        for( int i = 0 ; i< n ; i++){
            if (nums[i] <= mid ){
                count++;
            }
        }
        if ( nums[mid] == nums[mid +1] || nums[mid] == nums[mid -1]){
            return nums[mid];
        }
        if (count > mid ){
           high = mid;
        }
        else { 
            low = mid + 1;
        }
        }
        return low ;
    }
};