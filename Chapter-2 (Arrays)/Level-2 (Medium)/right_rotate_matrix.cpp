#include <bits/stdc++.h>
using namespace std;

// Brute Force Approach:
void rotateRight1(vector<vector<int>> &grid) {
    int n = grid.size();
    vector<vector<int>> res(n, vector<int>(n, 0));
    for(int i = 0; i < n; i++) for(int j = 0; j < n; j++) {
        res[j][n - i - 1] = grid[i][j];
    }
    for(int i = 0; i < n; i++) for(int j = 0; j < n; j++) {
        grid[i][j] = res[i][j];
    }
}
// TC: O(n^2), SC: O(n^2)

// Optimal Solution:
void rotateRight2(vector<vector<int>> &grid) {
    int n = grid.size();
    for(int i = 0; i < n; i++) for(int j = i + 1; j < n; j++) swap(grid[i][j], grid[j][i]);
    for(int i = 0; i < n; i++) reverse(grid[i].begin(), grid[i].end());
}
// TC: O(n^2), SC: O(1)

int main()
{
    vector<vector<int>> v1 = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    rotateRight1(v1);
    for(int i = 0; i < v1.size(); i++) {
        for(int j = 0; j < v1.size(); j++) cout << v1[i][j] << " ";
        cout << endl;
    }
    cout << endl << endl;
    vector<vector<int>> v2 = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    rotateRight2(v2);
    for(int i = 0; i < v2.size(); i++) {
        for(int j = 0; j < v2.size(); j++) cout << v2[i][j] << " ";
        cout << endl;
    }
    return 0;
}