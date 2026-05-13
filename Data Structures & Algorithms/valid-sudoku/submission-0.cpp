class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, unordered_set<char>> rows, cols;
        map<pair<int, int>, unordered_set<char>> squares;

        for (int row = 0; row < board.size(); ++row)
        {
            for (int col = 0; col < board.size(); ++col)
            {
                if (board[row][col] == '.')
                {
                    continue;
                }

                char c = board[row][col];
                pair<int, int> square_key = make_pair(row / 3, col / 3);

                if (rows[row].contains(c) ||
                    cols[col].contains(c) ||
                    squares[square_key].contains(c))
                {
                    return false;
                }

                rows[row].insert(c);
                cols[col].insert(c);
                squares[square_key].insert(c);
            }
        }

        return true;
    }
};
