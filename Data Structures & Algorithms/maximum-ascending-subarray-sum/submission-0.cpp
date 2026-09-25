class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
         int res = nums[0], curSum = nums[0];
for (int i = 1; i < nums.size(); i++) {
    if (nums[i] > nums[i - 1]) {
        curSum += nums[i];   // continue ascending
    } else {
        curSum = nums[i];    // reset to current element
    }
    res = max(res, curSum);  // always update result
}
return res;
    }
};