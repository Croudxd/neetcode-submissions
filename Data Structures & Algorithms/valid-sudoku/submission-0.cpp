class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int row = 0; row < 9; row++) {
            unordered_set<char> seen;
            for (int col = 0; col < 9; col++) {
                char c = board[row][col];
                if (c == '.') continue;
                if (seen.count(c)) return false;
                seen.insert(c);
            }
        }

        for (int col = 0; col < 9; col++) {
            unordered_set<char> seen;
            for (int row = 0; row < 9; row++) {
                char c = board[row][col];
                if (c == '.') continue;
                if (seen.count(c)) return false;
                seen.insert(c);
            }
        }

        for (int br = 0; br < 3; br++) {
            for (int bc = 0; bc < 3; bc++) {
                int row = br * 3;
                int col = bc * 3;
                unordered_set<char> seen;
                for (int r = 0; r < 3; r++) {
                    for (int c = 0; c < 3; c++) {
                        char ch = board[row + r][col + c];
                        if (ch == '.') continue;
                        if (seen.count(ch)) return false;
                        seen.insert(ch);
                    }
                }
            }
        }

        return true;
    }
};
