class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        // Create a new array with padding (extra 0 at start and end)
        // This avoids boundary checks for the first and last positions
        vector<int> f(flowerbed.size() + 2, 0);

        // Copy original flowerbed into the middle of f
        for (int i = 0; i < flowerbed.size(); i++) {
            f[i + 1] = flowerbed[i];
        }

        // Traverse the padded array
        for (int i = 1; i < f.size() - 1; i++) {
            // Check if current spot and its neighbors are empty
            if (f[i - 1] == 0 && f[i] == 0 && f[i + 1] == 0) {
                f[i] = 1;   // Plant a flower here
                n--;        // Decrease the number of flowers left to plant
            }
        }

        // If we managed to plant all required flowers, return true
        return n <= 0;
    }
};
