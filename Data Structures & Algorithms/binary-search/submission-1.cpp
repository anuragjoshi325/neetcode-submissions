class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        // Starting index
        int low = 0;
        
        // Ending index
        int high = nums.size() - 1;
        
        // Continue searching while low is less than or equal to high
        while (low <= high) {
            
            // Find the middle index
            int mid = low + (high - low) / 2;
            
            // If target is found, return its index
            if (nums[mid] == target) {
                return mid;
            }
            
            // If target is greater than middle element,
            // search in the right half
            else if (nums[mid] < target) {
                low = mid + 1;
            }
            
            // If target is smaller than middle element,
            // search in the left half
            else {
                high = mid - 1;
            }
        }
        
        // Target is not present in the array
        return -1;
    }
};