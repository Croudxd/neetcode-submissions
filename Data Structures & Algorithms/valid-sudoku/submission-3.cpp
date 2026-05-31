class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int rows = 0; rows < 9; rows++)
        {
            unordered_set<char> seen;
            for ( int cols = 0; cols < 9; cols++)
            {
                char c = board[rows][cols];
                if ( c == '.') continue;
                if ( seen.count(c) ) return false;
                seen.insert(c);
            }
        }

        for (int cols = 0; cols < 9; cols++)
        {
            unordered_set<char> seen;
            for ( int rows = 0; rows < 9; rows++)
            {
                char c = board[rows][cols];
                if ( c == '.') continue;
                if ( seen.count(c) ) return false;
                seen.insert(c);
            }
        }

        for (int br = 0; br < 3; br++)
        {
            for ( int bc = 0; bc < 3; bc++)
            {
                int row = br * 3; //0
                int col = bc * 3; //3
                unordered_set<char> seen;
                for (int r = 0; r < 3; r++)
                {
                    for (int c = 0; c < 3; c++)
                    {
                        char ch = board[row + r][col + c];
                        if ( ch == '.') continue;
                        if ( seen.count(ch) ) return false;
                        seen.insert(ch);
                    }
                }
            }
        }
        return true;
    }
};
