class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {

        int n = mat.size();
        int sum = 0;

        for(int i = 0; i < n; i++) {

            // primary diagonal element
            sum += mat[i][i];

            // secondary diagonal element
            sum += mat[i][n - 1 - i];
        }

        // subtract center element if counted twice
        if(n % 2 == 1) {
            sum -= mat[n/2][n/2];
        }

        return sum;
    }
};