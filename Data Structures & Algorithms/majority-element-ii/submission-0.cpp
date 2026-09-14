class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        // Step 1: Sort the array
        sort(nums.begin(), nums.end());

        vector<int> res;
        int n = nums.size();

        int i = 0;

        // Step 2: Check each group of same elements
        while (i < n) {

            int j = i;

            // Count how many times nums[i] occurs
            while (j < n && nums[j] == nums[i]) {
                j++;
            }

            // If frequency is greater than n/3
            if (j - i > n / 3) {
                res.push_back(nums[i]);
            }

            // Move to the next different element
            i = j;
        }

        return res;
    }
};