class Solution {
public:
     vector<int> replaceElements(vector<int>& arr) {

    int n = arr.size();              // size of array
    vector<int> ans(n);              // result array
    int rightmax = -1;               // maximum element on the right

    for(int i = n - 1; i >= 0; --i){
        ans[i] = rightmax;           // replace with max on right
        rightmax = max(rightmax, arr[i]); // update rightmax
    }

    return ans;
     }
};