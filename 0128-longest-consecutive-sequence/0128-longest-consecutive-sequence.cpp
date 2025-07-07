class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if ( nums.size() == 0 ){
            return 0;
        }
        sort (nums.begin(), nums.end ());

        int n = nums.size();
        int count = 0;
        int longest = 1;
        int smallele = INT_MIN;

        for (int i=0 ; i< n ; i++){
            if ( nums [i] - 1 == smallele ){
                count = count + 1;
              smallele = nums[i];
            }
            else if ( nums [i] != smallele){
                count = 1;
             smallele = nums[i];
            }
            longest = max ( longest , count );
        }
        return longest;
    }
};