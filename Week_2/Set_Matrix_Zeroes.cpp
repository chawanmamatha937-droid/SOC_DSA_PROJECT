class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();    
        int m = matrix[0].size(); 
        bool zero_rows[n];
        bool zero_cols[m];
        
        for (int i = 0; i < n; i++) zero_rows[i] = false;
        for (int j = 0; j < m; j++) zero_cols[j] = false;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == 0) {
                    zero_rows[i] = true;
                    zero_cols[j] = true;
                }
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (zero_rows[i] || zero_cols[j]) {
                    matrix[i][j] = 0;
                }
            }
        } 
    }
};