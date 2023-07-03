// Author Pushkraj
// Date 3 july 2023
// Q 73. Set Matrix Zeroes

// link : https://leetcode.com/problems/set-matrix-zeroes/

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int i,j,n,m,k,col0=1;
        n = matrix.size();
        m = matrix[0].size();
        for(i=0; i<n; i++){
            if(matrix[i][0] == 0) col0=0;
            for(j=1; j<m; j++){
                if(matrix[i][j] == 0){
                    matrix[i][0] = matrix[0][j] = 0;
                }
            }
        }
        for(i=n-1; i>=0; i--){
            for(j=m-1; j>0; j--){
                if(matrix[i][0] == 0 || matrix[0][j] == 0)
                    matrix[i][j] = 0;
            }
            if(col0==0) matrix[i][0] = 0;
        }
    }
};

