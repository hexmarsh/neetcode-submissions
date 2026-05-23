class Solution {
public:
    struct Coord2D
    {
        int row;
        int col;
    };

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int num_rows = matrix.size();
        int num_cols = matrix[0].size();

        int left  = 0;
        int right = num_rows * num_cols - 1;

        while (left <= right)
        {
            int mid = left + (right - left) / 2;

            Coord2D mid_coords = convert_1d_to_2d(mid, num_cols);

            int matrix_mid = matrix[mid_coords.row][mid_coords.col];

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

    Coord2D convert_1d_to_2d(int index, int total_width)
    {
        return { index / total_width, index % total_width };
    }
};
