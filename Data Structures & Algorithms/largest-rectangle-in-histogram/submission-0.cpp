class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {

        int n = heights.size();

        vector<int> nsl(n);
        vector<int> nsr(n);

        stack<int> st;

        // NSL
        for (int i = 0; i < n; i++) {

            while (!st.empty() && heights[st.top()] >= heights[i]) {
                st.pop();
            }

            if (st.empty()) {
                nsl[i] = -1;
            }
            else {
                nsl[i] = st.top();
            }

            st.push(i);
        }

        // Empty stack
        while (!st.empty()) {
            st.pop();
        }

        // NSR
        for (int i = n - 1; i >= 0; i--) {

            while (!st.empty() && heights[st.top()] >= heights[i]) {
                st.pop();
            }

            if (st.empty()) {
                nsr[i] = n;
            }
            else {
                nsr[i] = st.top();
            }

            st.push(i);
        }

        // Maximum area
        int ans = 0;

        for (int i = 0; i < n; i++) {

            int width = nsr[i] - nsl[i] - 1;

            int area = heights[i] * width;

            ans = max(ans, area);
        }

        return ans;
    }
};