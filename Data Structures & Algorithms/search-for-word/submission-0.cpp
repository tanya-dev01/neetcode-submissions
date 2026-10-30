class Solution {
   public:
    bool dfs(vector<vector<char>>& board, string& word, int r, int c, vector<vector<int>>& visited,
             int index) {
        int m = board.size();
        int n = board[0].size();
        if (index == word.size()) {
            return true;
        }
        if (r < 0 || r >= m || c < 0 || c >= n || visited[r][c] || board[r][c] != word[index]) {
            return false;
        }
        visited[r][c] = 1;
        bool left = dfs(board, word, r, c - 1, visited, index + 1);
        bool right = dfs(board, word, r, c + 1, visited, index + 1);
        bool up = dfs(board, word, r - 1, c, visited, index + 1);
        bool down = dfs(board, word, r + 1, c, visited, index + 1);
        visited[r][c] = 0;
        return left || right || up || down;
    }

    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n = board[0].size();

        vector<vector<int>> visited(m, vector<int>(n, 0));

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (dfs(board, word, i, j, visited, 0)) {
                    return true;
                }
            }
        }

        return false;
    }
};
