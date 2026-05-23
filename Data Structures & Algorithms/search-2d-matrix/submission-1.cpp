class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int num_rows = matrix.size();
        int num_cols = matrix[0].size();

        int left  = 0;
        int right = num_rows * num_cols - 1;

        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            int row = mid / num_cols;
            int col = mid % num_cols;

            int matrix_mid = matrix[row][col];

            if (matrix_mid < target)
            {
                left = mid + 1;
            }
            else if (matrix_mid > target)
            {
                right = mid - 1;
            }
            else
            {
                return true;
            }
        }

        return false;
    }
};
