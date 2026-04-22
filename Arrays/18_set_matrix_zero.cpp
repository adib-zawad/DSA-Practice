#include <bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
    int n = matrix.size();
    int m = matrix[0].size();

    bool firstRow = false, firstCol = false;

    // Check first column
    for (int i = 0; i < n; i++) {
        if (matrix[i][0] == 0) firstCol = true;
    }

    // Check first row
    for (int j = 0; j < m; j++) {
        if (matrix[0][j] == 0) firstRow = true;
    }

    // Mark zeros
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            if (matrix[i][j] == 0) {
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }

    // Set inner matrix
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                matrix[i][j] = 0;
            }
        }
    }

    // Set first column
    if (firstCol) {
        for (int i = 0; i < n; i++) {
            matrix[i][0] = 0;
        }
    }

    // Set first row
    if (firstRow) {
        for (int j = 0; j < m; j++) {
            matrix[0][j] = 0;
        }
    }
}

int main() {
    vector<vector<int>> matrix = {
        {1,1,1},
        {1,0,1},
        {1,1,1}
    };

    setZeroes(matrix);

    for (auto &row : matrix) {
        for (int x : row) cout << x << " ";
        cout << endl;
    }
}
