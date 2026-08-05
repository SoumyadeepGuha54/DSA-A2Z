#include <bits/stdc++.h>
using namespace std;

int nCr(int n, int r) {
    int result = 1;
    for(int i = 0; i < r; i++) {
        result *= n - i;
        result /= i + 1;
    }
    return result;
}
// TC: O(n), SC: O(1)

int getElement(int row, int col) {
    return nCr(row - 1, col - 1);
}
// TC: O(n), SC: O(1)

void getRow(int n) {
    int res = 1;
    cout << res << " ";
    for(int i = 1; i < n; i++) {
        res *= (n - i);
        res /= i;
        cout << res << " ";
    }
}
// TC: O(n), SC: O(1)

vector<vector<int>> getTriangle(int n) {
    vector<vector<int>> v;
    for(int i = 1; i <= n; i++) {
        vector<int> r;
        for(int j = 1; j <= i; j++) {
            r.push_back(nCr(i - 1, j - 1));
        }
        v.push_back(r);
    }
    return v;
}
// TC: O(n^3), SC: O(n^2)

int main() {
    cout << getElement(6, 3) << endl;
    getRow(5);
    cout << endl;
    vector<vector<int>> v = getTriangle(5);
    for(auto it1 : v) {
        for(auto it2 : it1) cout << it2 << " ";
        cout << endl;
    }
    return 0;
}