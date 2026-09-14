class Solution {
public:

    // Recursive function
    bool check(vector<int>& nums) {

        int n = nums.size();
        int count = 0;

        // Check all adjacent elements
        for (int i = 0; i < n - 1; i++) {

            // If current element is greater than next
            if (nums[i] > nums[i + 1]) {
                count++;
            }
        }

        // Check last element with first element
        if (nums[n - 1] > nums[0]) {
            count++;
        }

        // Only one break is allowed
        return count <= 1;
    }
};