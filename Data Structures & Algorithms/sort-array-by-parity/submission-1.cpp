class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {

        int j = 0;

        // i checks every element
        for(int i = 0; i < nums.size(); i++) {

            // If nums[i] is even
            if(nums[i] % 2 == 0) {

                // Move the even number to the front
                swap(nums[i], nums[j]);

                // Move j to the next position
                j++;
            }
        }

        return nums;
    }
};