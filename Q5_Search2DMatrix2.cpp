#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size(), col = matrix[0].size();
        int i = 0, j = col - 1;
        while (i < row && j >= 0) {
            if (matrix[i][j] == target) return true;
            else if (matrix[i][j] > target) j--;
            else i++;
        }
        return false;
    }
};

int main() {
    Solution sol;
    vector<vector<int>> matrix = {{1, 4, 7, 11}, {2, 5, 8, 12}, {3, 6, 9, 16}};
    int target = 5;
    cout << sol.searchMatrix(matrix, target) << endl;
    return 0;
}
