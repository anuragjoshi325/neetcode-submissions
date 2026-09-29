class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {

        // Continue until only one or zero stones are left
        while (stones.size() > 1) {

            // Sort stones so the two largest stones come at the end
            sort(stones.begin(), stones.end());

            // Difference between the two heaviest stones
            int cur = stones.back() - stones[stones.size() - 2];

            // Remove the heaviest stone
            stones.pop_back();

            // Remove the second heaviest stone
            stones.pop_back();

            // If both stones were not equal,
            // add the remaining weight back
            if (cur != 0) {
                stones.push_back(cur);
            }
        }

        // If no stone is left, return 0
        // Otherwise return the remaining stone
        return stones.empty() ? 0 : stones[0];
    }
};