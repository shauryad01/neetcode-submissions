class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        for (int i = 0; i < 9; i++) {
            unordered_map<int, int> rowmap;
            unordered_map<int, int> colmap;

            for (int j = 0; j < 9; j++) {

                if (board[i][j] != '.') {
                    rowmap[board[i][j]]++;
                    if (rowmap[board[i][j]] > 1)
                        return false;
                }

                if (board[j][i] != '.') {
                    colmap[board[j][i]]++;
                    if (colmap[board[j][i]] > 1)
                        return false;
                }
            }
        }

        for (int k = 0; k < 9; k += 3) {
            for (int l = 0; l < 9; l += 3) {

                unordered_map<int, int> boxmap;

                for (int i = k; i < k + 3; i++) {
                    for (int j = l; j < l + 3; j++) {

                        if (board[i][j] == '.') continue;

                        boxmap[board[i][j]]++;
                        if (boxmap[board[i][j]] > 1)
                            return false;
                    }
                }
            }
        }

        return true;
    }
};
