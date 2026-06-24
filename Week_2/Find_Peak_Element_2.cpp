class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        
        int low = 0;
        int high = n - 1;
        
        while (low <= high) {
            int midCol = low + (high - low) / 2;
            int maxRow = 0;
            for (int r = 0; r < m; r++) {
                if (mat[r][midCol] > mat[maxRow][midCol]) {
                    maxRow = r;
                }
            }
             int leftElement = (midCol - 1 >= 0) ? mat[maxRow][midCol - 1] : -1;
            int rightElement = (midCol + 1 < n) ? mat[maxRow][midCol + 1] : -1;
           if (mat[maxRow][midCol] > leftElement && mat[maxRow][midCol] > rightElement) {
                return {maxRow, midCol};
            }
            else if (leftElement > mat[maxRow][midCol]) {
                high = midCol - 1;
            }
            else {
                low = midCol + 1;
            }
        }
        
        return {-1, -1};
    }
};