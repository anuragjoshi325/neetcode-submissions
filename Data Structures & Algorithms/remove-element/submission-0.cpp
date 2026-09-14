class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        // k tells us where to put the next valid element
        int k = 0;

        // Check every element of the array
        for (int i = 0; i < nums.size(); i++) {

            // If current element is not equal to val
            if (nums[i] != val) {

                // Put the valid element at position k
                nums[k++] = nums[i];
            }
        }

        // k is the number of elements left
        return k;
    }
};