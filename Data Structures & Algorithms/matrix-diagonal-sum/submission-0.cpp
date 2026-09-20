class Solution {
public:
    int diagonalSum(vector<vector<int>>& math) {
        int n=math.size();
        long long sum=0;
        for(int i=0;i<n;i++){
            sum+=math[i][i];
            if(i!=n-1-i)
            sum+=math[i][n-1-i];
        }
        return (int)sum;
    }
};