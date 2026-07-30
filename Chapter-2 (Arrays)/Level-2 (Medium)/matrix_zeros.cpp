#include <bits/stdc++.h>
using namespace std;

// Brute Force Approach:
void matrixZeros1(vector<vector<int>> &grid) {
    int m = grid.size(), n = grid[0].size();
    for(int i = 0; i < m; i++) for(int j = 0; j < n; j++) {
        if(grid[i][j] == 0) {
            for(int k = 0; k < m; k++) if(grid[k][j] != 0) grid[k][j] = -1;
            for(int k = 0; k < n; k++) if(grid[i][k] != 0) grid[i][k] = -1;
        }
    }
    for(int i = 0; i < m; i++) for(int j = 0; j < n; j++) {
        if(grid[i][j] == -1) grid[i][j] = 0;
    }
}
// TC: O(m * n * (m + n)), SC: O(1)

// Better Solution:
void matrixZeros2(vector<vector<int>> &grid) {
    int m = grid.size(), n = grid[0].size();
    vector<int> row(m, 0), col(n, 0);
    for(int i = 0; i < m; i++) for(int j = 0; j < n; j++) {
        if(grid[i][j] == 0) row[i] = 1, col[j] = 1;
    }
    for(int i = 0; i < m; i++) for(int j = 0; j < n; j++) {
        if(row[i] || col[j]) grid[i][j] = 0;
    }
}
// TC: O(m * n), SC: O(m + n)

// Optimal Approach:
void matrixZeros3(vector<vector<int>> &grid) {
    int m = grid.size(), n = grid[0].size(), col0 = 1;
    for(int i = 0; i < m; i++) for(int j = 0; j < n; j++) {
        if(grid[i][j] == 0) {
            grid[i][0] = 0;
            if(j != 0) grid[0][j] = 0;
            else col0 = 0;
        }
    }
    for(int i = 1; i < m; i++) for(int j = 1; j < n; j++) {
        if(grid[i][0] == 0 || grid[0][j] == 0) grid[i][j] = 0;
    }
    if(grid[0][0] == 0) for(int j = 0; j < n; j++) grid[0][j] = 0;
    if(col0 == 0) for(int i = 0; i < m; i++) grid[i][0] = 0;
}
// TC: O(m * n), SC: O(1)

int main() {
    vector<vector<int>> v1 = {{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};
    matrixZeros1(v1);
    for(int i = 0; i < v1.size(); i++) {
        for(int j = 0; j < v1[0].size(); j++) cout << v1[i][j] << " ";
        cout << endl;
    }
    cout << endl << endl;
    vector<vector<int>> v2 = {{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};
    matrixZeros2(v2);
    for(int i = 0; i < v2.size(); i++) {
        for(int j = 0; j < v2[0].size(); j++) cout << v2[i][j] << " ";
        cout << endl;
    }
    cout << endl << endl;
    vector<vector<int>> v3 = {{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};
    matrixZeros3(v3);
    for(int i = 0; i < v3.size(); i++) {
        for(int j = 0; j < v3[0].size(); j++) cout << v3[i][j] << " ";
        cout << endl;
    }
    return 0;
}