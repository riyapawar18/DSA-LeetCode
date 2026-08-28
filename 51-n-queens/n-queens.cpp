#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    bool isSafe(vector<string> &board, int row, int col, int n) {
        // 1. Check vertical column up
        for (int i = 0; i < row; i++) {
            if (board[i][col] == 'Q') return false;
        }
        
        // 2. Check upper-left diagonal
        for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
            if (board[i][j] == 'Q') return false;
        }
        
        // 3. Check upper-right diagonal
        for (int i = row, j = col; i >= 0 && j < n; i--, j++) {
            if (board[i][j] == 'Q') return false;
        }
        
        return true;
    }

    void nQueens(vector<string> &board, int row, int n, vector<vector<string>> &ans) {
        if (row == n) {
            ans.push_back(board);
            return; // 👈 CRITICAL FIX: Stop recursion here to prevent buffer overflow
        }
        
        for (int j = 0; j < n; j++) {
            if (isSafe(board, row, j, n)) {
                board[row][j] = 'Q';         // Place Queen
                nQueens(board, row + 1, n, ans);
                board[row][j] = '.';         // Backtrack
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n, string(n, '.'));
        vector<vector<string>> ans;
        nQueens(board, 0, n, ans);
        return ans;
    }
};
