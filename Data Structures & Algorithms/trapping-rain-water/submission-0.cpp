class Solution {
public:
    int trap(vector<int>& height) {

        int n= height.size();
        int leftMax[20000], rightMax[20000];

        // Store maximum height from the left
        leftMax[0] = height[0];

        // Store maximum height from the right
        rightMax[n - 1] = height[n - 1];

        // Build leftMax array
        for (int i = 1; i < n; i++) {
            leftMax[i] = max(leftMax[i - 1], height[i]);
        }

        // Build rightMax array
        for (int i = n - 2; i >= 0; i--) {
            rightMax[i] = max(rightMax[i + 1], height[i]);
        }

        int waterTrapped = 0;

        // Calculate water at every position
        for (int i = 0; i < n; i++) {

            int currWater =
                min(leftMax[i], rightMax[i]) - height[i];

            if (currWater > 0) {
                waterTrapped += currWater;
            }
        }

        return waterTrapped;
    }
};