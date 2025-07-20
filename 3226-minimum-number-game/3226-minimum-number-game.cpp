class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        if (nums.size() == 0 )return nums;
        int n = nums.size();
        sort(nums.begin() , nums.end());
        
        for (int i = 0 ; i<n-1 ; i+=2){
             int j = i+1;

            swap(nums[i] , nums[j]);

            j++;
        }
        return nums ;
    }
};