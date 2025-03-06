#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = 0, col = matrix[0].size() - 1;
        while (row < matrix.size() && col >= 0) {
            if (matrix[row][col] == target) return true;
            else if (matrix[row][col] < target) row++;
            else col--;
        }
        return false;
    }
};

int main() {
    Solution sol;
    vector<vector<int>> matrix = {{1, 4, 7, 11}, {2, 5, 8, 12}, {3, 6, 9, 16}};
    int target = 5;
    cout << (sol.searchMatrix(matrix, target) ? "true" : "false") << endl;
    return 0;
}
