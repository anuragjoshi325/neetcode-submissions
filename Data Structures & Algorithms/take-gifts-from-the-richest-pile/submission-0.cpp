class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        // Max-heap to always access the largest gift pile
        priority_queue<int> pq(gifts.begin(), gifts.end());

        // Perform k operations
        for (int t = 0; t < k; t++) {
            // Get the largest pile
            int n = pq.top();
            pq.pop();

            // Replace it with its floor square root
            pq.push((int)floor(sqrt(n)));
        }

        // Calculate the sum of all remaining gifts
        long long sum = 0;
        while (!pq.empty()) {
            sum += pq.top();
            pq.pop();
        }

        return sum;
    }
};