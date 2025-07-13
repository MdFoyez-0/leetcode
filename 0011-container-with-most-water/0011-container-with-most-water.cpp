class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int maxwater = 0;
        int i = 0;
        int j = n - 1 ;

        while(i < j ){
            int wid = j - i;
            int ht = min(height[i],height[j]);
            int currwater = ht * wid;

            maxwater = max(maxwater,currwater);

            if (height[i] > height[j]){ 
                j--;
                }
            else{ 
                i++;
            }
        }

        return maxwater;
    }
};