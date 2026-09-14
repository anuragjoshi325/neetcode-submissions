class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {

        // Sort the array using a custom condition
        sort(nums.begin(), nums.end(), [&](int &a, int &b) {

            // a & 1 gives:
            // 0 → even
            // 1 → odd
            // So even numbers come before odd numbers
            return (a & 1) < (b & 1);
        });

        // Return the sorted array
        return nums;
    }
};